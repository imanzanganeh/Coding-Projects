//Iman Arfa-Zanganeh
//Assignment #3
//Problem #1
#include <iostream>

using namespace std;
int main()
{
  int input;
  cout << "Enter number 1 - 10 please." << '\n';
  cout << "input: ";
  cin >> input;

  while ((input < 1) || (input > 10))//check for input being less than 1 or greater than 10
  {
    cout << "Try again!" << '\n';
    cout << "input: ";
    cin >> input;
  }

  cout << "output: ";

  for (int i = 1; i <= input; i++)//outputs number of #'s relative to the number inputted
  {
    cout << "#";
  }
  cout << '\n' << "Bye!";
  return 0;
}//main
