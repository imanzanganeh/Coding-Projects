//Iman Arfa-Zanganeh
//Assignment #3
//Problem #1
#include <iostream>

using namespace std;
int main()
{

  // read in integer from standard input
  int input;
  cout << "Enter number 1 - 10 please." << '\n';
  cout << "input: ";
  cin >> input;

  //check for input being less than 1 or greater than 10
  while ((input < 1) || (input > 10))
  {
    cout << "Try again!" << '\n';
    cout << "input: ";
    cin >> input;
  }

  cout << "output: ";

  //outputs number of #'s along one line
  for (int i = 1; i <= input; i++)
  {
    cout << "#";
  }
  cout << '\n' << "Bye!";
  return 0;
}//main
