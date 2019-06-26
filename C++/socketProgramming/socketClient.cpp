#include <iostream>
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
  int _clientSocket = socket(AF_INET, SOCK_STREAM, 0);
  bool choice = true;//Keeps track of program running or not
  int portNum = 54000;

  if (argc >= 2)
    {
      portNum = atoi(argv[1]);
    }
  sockaddr_in client;//ip address and port of client
  client.sin_family = AF_INET;
  client.sin_port = htons(portNum);//change port for client from host byte order to network byte order

  int status = connect(_clientSocket, (sockaddr*)&client, sizeof(client));//connect to server
   if (status == -1)
    {
      cerr << "Error. Connection to socket server failed." << endl;
      return -1;
    }
  else
    {
      cout << "Client has connected to server" << endl << '\n'; 
    }

  char msg[4000];//length of the message of the client
  char buffer[4000];//stores message from the server and sends it to client scoket
  while (choice != false)
    {
      memset(msg, 0, 4000);
      cout << "Client: ";
      cin.getline(msg, 4000);
      
      int _sendMsg = send(_clientSocket, msg, 4000, 0);//send message to the server
      if (_sendMsg == -1)
	{
	  cerr << "Error. Could not send to socket server.";
	  break;
	}

      memset(buffer, 0, 4000);
      int _recvMsg = recv(_clientSocket, buffer, 4000, 0);//receives message sent back from the server
      if (_recvMsg == -1)
	{
	  cerr << "Error. Message not received.";
	  break;
	}
      else
	{
	  cout << "Server: " << string(buffer, _recvMsg) << endl << '\n';
	}
    }
  
  return 0;
}
