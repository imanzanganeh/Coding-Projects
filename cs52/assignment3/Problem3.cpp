//Iman Arfa-Zanganeh
//Assignment #3
//Problem #3
#include <iostream>

using namespace std;
int main() 
{
	int input;
	cout << "Enter number 1 - 20 please." << '\n';
	cout << "input: ";
	cin >> input;
	
	while ((input < 1) || (input > 20))//check for input being less than 1 or greater than 20
	{
		cout << "Try again!" << '\n';
		cout << "input: ";
		cin >> input;
	}
	
	cout << "output: " << '\n';
	
	for (int i = 0; i < input; i++)//starts new line after number of #'s are inputted for that iteration
	{
		for (int j = 0; j < input; j++)//outputs horizontally number of #'s relative to the number inputted
		{
			cout << "#";
		}
		cout << '\n';
	}
	cout << "Bye!";
	return 0;
}