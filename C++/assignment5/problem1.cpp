//Iman Arfa-Zanganeh
//Assignment #5
//Problem #1
#include <iostream>

using namespace std;
int main()
{
  int counter;
  cout << "How many integers would you like to enter? ";
  cin >> counter;
  int* amount = new int[counter];

  //stores array of length counter with values from input
  for (int i = 1; i <= counter; i++)
    {
      cout << i << ":" << " "; 
      cin >> amount[i-1]; 
    }

  //sorts array
  for (int i = 0; i < counter; i++)
    {
      int min = i;
      for (int j = i + 1; j < counter; j++)
	{
	  if (amount[j] < amount[min])//check for if previous value is greater than current value
	    {
	      min = j;
	    }
	} 
      
      if (min != i)
	{
	  int temp = amount[i];
	  amount[i] = amount[min];
	  amount[min] = temp;
	}
    }
  
  cout << "Sorted: " << '\n';

  //prints out sorted array 
  for(int i = 0; i < counter; i++)
    {
      if (i ==  counter - 1)//check for last element in array in order to prevent a premature comma to be printed out
	{
	  cout << amount[i] << '\n';
	}
      else
	{
	  cout << amount[i] << ",";
	}
    }
  
  delete[] amount;
  return 0;
}
