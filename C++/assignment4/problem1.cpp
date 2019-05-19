//Iman Arfa-Zanganeh
//Assignment #4
//Problem #1

#include <iostream>

using namespace std;

void userCheck(int& input1, int& input2, int& input3);
//validates user inputs to be positive
//formal parameter named input1, input2, input3  are the user inputs which are  assumed to be integer 

void largestNum(int number1, int number2, int number3);
//finds largest number from user inputs
//formal parameters named number1, number2, number3 are assumed to be positive integers

int main()
{
  int userInput1;
  int userInput2;
  int userInput3;

  //checks inputs for positive values, determines largest input
  userCheck(userInput1, userInput2, userInput3);
  largestNum(userInput1, userInput2, userInput3);

  return 0;
}//main

void userCheck(int& input1, int& input2, int& input3)
{   
  
  cout << "Enter an integer: ";
  cin >> input1;
  while (input1 <= 0)//reprompts for integer until positive
    {
      cout << "Invalid! Must be > 0" << '\n';
      cout << "Enter an integer: ";
      cin >> input1;
    }
  
  cout << "Enter an integer: ";
  cin >> input2;
  while (input2 <= 0)//like above check but for input2
    {
      cout << "Invalid! Must be > 0" << '\n';
      cout << "Enter an integer: ";
      cin >> input2;
    }
  
  cout << "Enter an integer: ";
  cin >> input3;
  while (input3 <= 0)
    {
      cout << "Invalid! Must be > 0" << '\n';
      cout << "Enter an integer: ";
      cin >> input3;
    }
  
  return;
}//end of userCheck function

void largestNum(int number1, int number2, int number3)
{
  //checks for greatest value input
  if (number1 > number2)
    {
      if (number1 > number3)
	{
	  cout << "The largest number is: " << number1 << '\n';
	}
      else
	{
	  cout << "The largest number is: " << number3 << '\n';
	}
    }

  //checks for greatest value input but different order 
  else if (number2 > number1)
    {
      if (number2 > number3)
	{
	  cout << "The largest number is: " << number2 << '\n';
	}
      else
	{
	  cout << "The largest number is: " << number3 << '\n';
	}
    }

  //checks for greatest value input but different order
  else if (number3 > number1)
    {
      if (number3 > number2)
	{
	  cout << "The largest number is: " << number3 << '\n';
	}
      else
	{
	  cout << "The largest number is: " << number2 << '\n';
	}
    }
  
  else
    {
      cout << "All of the numbers are equal. There is no largest number" << '\n';
    }
}//end of largestNum function


