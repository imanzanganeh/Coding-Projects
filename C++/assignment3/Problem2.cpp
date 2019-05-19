//Iman Arfa-Zanganeh
//Assignment #3
//Problem #2
#include <iostream>

using namespace std;
int main() 
{
  //reads in integer from standard input
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

  cout << "output: " << '\n';

  // outputs number of lines for each # that is relative to the value inputted
  for (int i = 1; i <= input; i++)
    {
      cout << "#" << '\n';
    }
  cout << "Bye!";
  return 0;
}
