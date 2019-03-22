//Iman Arfa-Zanganeh
//Assignment #3
//Problem #2
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

  cout << "output: " << '\n';

  for (int i = 1; i <= input; i++)//outputs number of #'s relative to the number inputted
    {
      cout << "#" << '\n';
    }
  cout << "Bye!";
  return 0;
}
