#include <sys/socket.h>
#include <iostream>
#include <unistd.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
  int portNumber = 54000;

  if (argc >= 2)//used to change port to first input parameter via terminal/command line
    {
      portNumber = atoi(argv[1]);
    }

  bool check = true;//determines whether program has ended
  
  int _socket = socket(AF_INET, SOCK_STREAM, 0);//server socket created

  sockaddr_in handleServer;//ip address and port that will eventually be binded to server
 
  handleServer.sin_port = htons(portNumber);//change port for server from host byte order to network byte order(always big endian).
  
  int _bind = bind(_socket, (sockaddr*)&handleServer, sizeof(handleServer));//server socket now holds an ip address and port
  if(_bind == -1)
    {
      cerr << "Error. IP is not binded to server socket";
      return -1;
    }
  
  int _listen = listen(_socket, SOMAXCONN);//Server listening for SOMAXCONN connections that could be made to the its socket. SOMAXCONN is the maximum number of connections that are allowed to be passed to listen(), which is defined to be 128.
  if (_listen == -1)
    {
      cerr << "Error. Server can't listen for any connections";
      return -1;
    }

  sockaddr_in _client;//Internet address and port of whatever is connecting to server socket; 
  socklen_t clientSize = sizeof(_client);
  char host[NI_MAXHOST];//Maximum size of host length buffer. Will hold host name
  char server[NI_MAXSERV];//Maximum size of server length buffer. Will hold service name
  
  int dataSocket = accept(_socket, (sockaddr*) &_client, &clientSize);//transfers data from any incoming connections to  server socket.

  int name = getnameinfo((sockaddr*)&_client, clientSize, host, NI_MAXHOST, server, NI_MAXSERV, 0);//Retrieve hostname and service name.  Host name is stored in host and service name is stored in svc.

  cout << host << " connected on " << ntohs(_client.sin_port) << endl;

  char buf[4096];//buffer that stores received bytes from the client. Will store the string received from the client
  while (check != false)
    {
      memset(buf, 0, 4096);//Resets buffer with 0's for every iteration of the while loop such that current input doesn't get concatinated with previous input  
      int bytesReceiver = recv(dataSocket, buf, 4096, 0);//used for server socket to receive socket. Length of message in bytes

      if (bytesReceiver == -1)//for if user terminates window in which telnet is being used
	{
	  cerr << "There was a connection issue" << endl;
	  break;
	}

      if (check != false)
	{
	  //displays message. string(buf, 0, bytesReceiver) is a substring that will in reality hold the full length of the strings inputted from the client
	  cout << "received: " << string(buf, 0, bytesReceiver) << endl;
      
	  //sends message. Message stored in buf will be transmitted with a length of byteReceiver.
	  send(dataSocket, buf, bytesReceiver, 0);
	}
    }

  return 0;
}
