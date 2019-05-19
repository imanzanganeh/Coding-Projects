// Iman Arfa-Zanganeh
// Assignment #2
// Problem #3
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) 
{
	int number;//numerical value of month
	string month;//word representation of month
	
	while ((number > 1) || (number < 12))
	{
	cout << "Number: ";
	cin >> number;//input for numerical value of month
	
		switch(number)//different cases for number chosen
		{
			case 1://case if 1 was chosen
				{
					month = "January";//number = 1, therefore month = January since it is the first month of the year
					cout << "Month: " << month;
					return 0;
				}
			case 2://case if 2 was chosen
				{
					month = "February";// number = 2, therefore month = February since it is the second month of the year
					cout << "Month: " << month;
					return 0;
				}
			case 3://case if 3 was chosen
				{
					month = "March";//number = 3, therefore month = March since it is the third month of the year
					cout << "Month: " << month;
					return 0;
				}
			case 4://case if 4 was chosen
				{
					month = "April";//number = 4, therefore month = April since it is the fourth month of the year
					cout << "Month: " << month;
					return 0;
				}
			case 5://case if 5 was chosen
				{
					month = "May";//number = 5, therefore month = May since it is the fifth month of the year
					cout << "Month: " << month;
					return 0;
				}
			case 6://case if 6 was chosen
				{
					month = "June";//number = 6, therefore month = June since it is the sixth month of the year
					cout << "Month: " << month;
					return 0;
				}
			case 7://case if 7 was chosen
				{
					month = "July";//number = 7, therefore month = July since it is the seventh month of the year
					cout << "Month: " << month;
					return 0;
				}
			case 8://case if 8 was chosen
				{
					month = "August";//number = 8, therefore month = August since it is the eighth month of the year
					cout << "Month: " << month;
					return 0;
				}
			case 9://case if 9 was chosen
				{
					month = "September";//number = 9, therefore month = September since it is the ninth month of the year
					cout << "Month: " << month;
					return 0;
				}
			case 10://case if 10 was chosen
				{
					month = "October";//number = 10, therefore month = October since it is the tenth month of the year
					cout << "Month: " << month;
					return 0;
				}
			case 11://case if 11 was chosen
				{
					month = "November";//number = 11, therefore month = November since it is the eleventh month of the year
					cout << "Month: " << month;
					return 0;
				}
			case 12://case if 12 was chosen
				{
					month = "December";//number = 12, therefore month = December since it is the twelfth month of the year
					cout << "Month: " << month;
					return 0;
				}
			default://case if number < 1 or number > 12
				{
					cout << "Invalid option" << '\n';
					break;
				}
		}//switch
	}//while
}//main


//while loop for invalidation, string variables