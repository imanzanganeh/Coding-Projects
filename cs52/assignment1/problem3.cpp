#include <iostream>

using namespace std;
int main()
{
	double number1; 
	double number2;
	float quotient; //divides number1 by number2
	cout << "Enter two numbers." << "\n"; 
	cout << "Enter the first number: ";
	cin >> number1; //takes input of first number
	cout << "Enter the second number: ";
	cin >> number2; //takes input of second number
	if (number2 == 0)
		cout << "Error. You can't divide by 0";
	else
	{
		quotient = number1 / number2;
		cout << quotient;
	}
	return 0;
}
