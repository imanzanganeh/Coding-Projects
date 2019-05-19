// Iman Arfa-Zanganeh
// Assignment #2
// Problem #2
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
    //cout.setf(ios::fixed);//fixed point notation
	//cout.setf(ios::showpoint);//always shows decimal point
//	cout.precision(13);//fixes output to 13 decimal places(13 is a place holder; can change value depending on level of precision wanted)
	
	char operation;//arithmetic operation
	double operand1;//first operand
	double operand2;//second operand
	double result;//result that will be from the 1st and 2nd operand after arithmetic operation
	bool operatorNotSet = true;

	while(operatorNotSet) {
	
	    cout << "Operation: ";
	    cin >> operation;//input for arithmetic operation
	
	    switch(operation)//different cases for arithmetic operation chosen
	    {
	    case '+'://case if addition sign was chosen
	    {
		cout << "Operand 1: ";
		cin >> operand1;//input for 1st operand
		cout << "Operand 2: ";
		cin >> operand2;//input for 2nd operand
		result = operand1 + operand2;//result after 1st and 2nd operand addition
		cout << "Result:" << operand1 << " + " << operand2 << " = " << result;
		operatorNotSet = false;
		break;//ends switch statement
	    }
	    case '-':
	    {
		cout << "Operand 1: ";
		cin >> operand1;
		cout << "Operand 2: ";
		cin >> operand2;
		result = operand1 - operand2;
		cout << "Result:" << operand1 << " - " << operand2 << " = " << result;
		operatorNotSet = false;
		break;//ends switch statement
	    }
	    case '*':
	    {
		cout << "Operand 1: ";
		cin >> operand1;
		cout << "Operand 2:";
		cin >> operand2;
		result = operand1 * operand2;
		cout << "Result:" << operand1 << " * " << operand2 << " = " << result;
		operatorNotSet = false;
		break;
	    }
	    case '/':
	    {
		cout << "Operand 1: ";
		cin >> operand1;
		cout << "Operand 2: ";
		cin >> operand2;
		operatorNotSet = false;
		if (operand2 == 0)
		{
		    cout << "Error, division by 0.";
		    break;
		}
		else
		{
		    result = operand1 / operand2;
		    cout << "Result: " << operand1 << " / " << operand2 << " = " << result;
		    break; 
		}
				
	    }

	    default://case if arithmetic operation was not inputted
		cout << "Invalid option." <<endl;

	    }
	}//switch
	return 0;
}//main

//while loop for invalidation, check if letter is inputted for operand, precision of input
