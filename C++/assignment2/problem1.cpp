// Iman Arfa-Zanganeh
// Assignment #2
// Problem #1
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	int input1;//first integer
	int input2;//second integer
	int input3;//third integer
	
	do//executes input for first time
	{
		cout << "Enter an integer: ";
		cin >> input1;//input for first integer
		cout << "Enter an integer: ";
		cin >> input2;//input for second integer
		cout << "Enter an integer: ";
		cin >> input3;//input for third integer
		if ((input1 <= 0) || (input2 <= 0) || (input3 <= 0))//check for if input1, input2, or input3 equal 0 or are negative
			cout << "Invalid option. Enter again" << '\n';
	}while ((input1 <= 0) || (input2 <= 0) || (input3 <= 0));//checks //check for if input1, input2, or input3 equal 0 or are negative. If 0 or negative, then user is prompted again to reinput allowable values
	
		if (input1 > input2)//check for first integer being greater than second integer
		{
			if (input1 > input3)//check for first integer being greater than third integer
				cout << "The largest integer is: " << input1;
			else
				cout << "The largest integer is: " << input3;
				return 0;
		}
		else if (input2 > input1)//check for second integer being greater than first integer
		{
			if (input2 > input3)//check for second integer being greater than third integer
				cout << "The largest integer is: " << input2;
			else
				cout << "The largest integer is: " << input3;
				return 0;
		}
		else//case when third integer is greater than first and second integer
			cout << "The largest integer is: " << input3;
			return 0;
}//main