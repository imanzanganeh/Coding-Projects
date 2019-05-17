//Iman Arfa-Zanganeh
//Assignment 4
//Problem #2

#include <iostream>

using namespace std;

void userCheck(int& input1, int& input2);
//validates user inputs to be positive
//formal parameter named input1, input2, are the user inputs which are assumed to be integers 

int sumIntegers(int number1, int number2);
//sums all integers from formal paramaters number1 to number2
 
int main()
{
  int userInput1;
  int userInput2;
  int sum;

  cout << "Start: ";
  cin >> userInput1;
  cout << "End: ";
  cin >> userInput2;

  //validates user input, calculates sum
  userCheck(userInput1, userInput2);
  sum = sumIntegers(userInput1, userInput2);

  cout << "Sum: " << sum << '\n';
  return 0;
}//main

void userCheck(int& input1, int& input2)
{
  while (input1 >= input2)
    {     
      cout << "Invalid! The second input must be larger than the first input" << '\n';
      
      cout << "Start: ";
      cin >> input1;
      cout << "End:  ";
      cin >> input2;
      
    }//while loop
  
  return;
}//end of userCheck function

int sumIntegers(int number1, int number2)
{
  int total = 0;
  int length = (number2 - number1) + 1;//number of integers between formal parameters number1 and number2 both inclusive
 
  //sums number1 to total and increments number1
  for (int i = 0; i < length; i++)
    {
      total += number1;
      number1++;
    }
  return total;
}//end of sumIntegers function
