// Iman Arfa-Zanganeh
// Assignment #2
// Problem #4
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	cout.setf(ios::fixed);//fixed point notation
	cout.setf(ios::showpoint);//always shows decimal point
	cout.precision(2);//fixes output to 2 decimal places
	
	double physics;//physics mark
	double chemistry;//chemistry mark
	double biology;//biology mark
	double mathematics;//mathematics mark
	double computer;//computer mark
	double percentage;//average of all marks
	char letterGrade;//letter representation of percentage
	
	do//executes input for first time
	{
		cout << "Please input marks of five subjects." << '\n';
		cout << "Physics: ";
		cin >> physics;//input for physics mark
		cout << "Chemistry: ";
		cin >> chemistry;//input for chemistry mark
		cout << "Biology: ";
		cin >> biology;//input for biology mark
		cout << "Mathematics: ";
		cin >> mathematics;//input for mathematics mark
		cout << "Computer: ";
		cin >> computer;//input for computer mark
		if ((physics < 0) || (chemistry < 0) || (biology < 0) || (mathematics < 0) || (computer < 0))
			cout << "Invalid option. Enter again" << "\n";
	}while ((physics < 0) || (chemistry < 0) || (biology < 0) || (mathematics < 0) || (computer < 0));// check if marks are negative. If marks are negative or if user input is invalid, user is prompted again to readd marks
	
	percentage = (physics + chemistry + biology + mathematics + computer) / 5;//calculation for average of all marks
	cout << "Percentage = " << percentage << '\n';

	if (percentage >= 90)//check for if percentage is greater than or equal to 90
	{
		cout << "Grade A";	
		return 0;
	}
	else if ((percentage < 90) && (percentage >= 80))//check for if percentage is less than 90 and greater than or equal to 80
	{
		cout << "Grade B";
		return 0;
	}
	else if ((percentage < 80) && (percentage >= 70))//check for if percentage is less than 80 and greater than or equal to 70
	{
		cout << "Grade C";
		return 0;
	}
	else if ((percentage < 70) && (percentage >= 60))//check for if percentage is less than 70 and greater than or equal to 60
	{
		cout << "Grade D";
		return 0;
	}
	else if ((percentage < 60) && (percentage >= 40))//check for if percentage is less than 60 and greater than or equal to 40
	{
		cout << "Grade E";
		return 0;
	}
	else if (percentage < 40)//case when percentage is less than 40
	{
		cout << "Grade F";
		return 0;
	}
}//main

//while loop for invalidation(not just in total but if someone one messes up input for "physics" mark for example and puts in a letter; not start everything over)