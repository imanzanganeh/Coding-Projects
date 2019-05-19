//Iman Arfa-Zanganeh
//Assignment #5
//Problem #2
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int letCount(string phrase[5], int sizeArray, char letter);

int main()
{
  int size = 5;
  string words[size];
  char target;//char that should be located
  int occurance;//number of occurances of char
  cout << "Enter five items." << '\n';

  for (int i = 1; i <= size; i++)
    {
      cout << "item " << i << ": ";
      getline(cin, words[i-1]);
    }

  cout << '\n' <<  "Target: ";
  cin >> target;

  occurance = letCount(words, size, target);
  cout << "the char " << target << " was found " << occurance << " times." << '\n';
  
  return 0;
}

int letCount(string phrase[5], int sizeArray, char letter)
{
  int counter = 0;

  for (int i = 0; i < sizeArray; i++)//goes through every element in sizeArray
    {
      for (int j = 0; j < phrase[i].length(); j++)//goes through the string element itself
	{
	  if (letter == phrase[i][j])//check for char appearing in a string
	    {
	       counter++;
	    }
	}
    }

  return counter;
}
