//Iman Arfa-Zanganeh
//Assignment #6
//Problem #1
#include <iostream>

using namespace std;

int recursive(unsigned int n);

int main()
{
  unsigned int num;
  cout << "input: ";
  cin >> num;
  unsigned int answer = recursive(num);//function call
  cout << "result: " << answer << '\n';  
  return 0;
}//main

//recursive function computes n * n/3 * n/9...
int recursive(unsigned int n)
{
  if(n <= 1)//The case n = 1, or recursive(1/3) is uneeded and does not need to be checked.  The return in the else statement recursive(n/3) will always be multiplied by 1 when n = 1.  Therefore, when recursive(1/3) evaluates to recursive(0), the if statement will return 1, which just results in another 1 being multiplied to the entire expression in the else statement. 
    {
      return 1;
    }
  else 
    {
      return recursive((n / 3)) * n;//recursion calls for n/3 multiples
    }
}
