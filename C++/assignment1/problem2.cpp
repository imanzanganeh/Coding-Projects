// Iman Arfa-Zanganeh
// Assignment #1
// Problem #2
#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
	double mealCharge;
	double salesTax;
	double tip;
	double total;
	cout << "Enter meal charge: ";
	cin >> mealCharge; //meal charge input
	salesTax = 0.0975 * mealCharge; //Sales Tax calculation
	tip = (salesTax + mealCharge) * 0.2; //Tip calculation
	total = mealCharge + salesTax + tip; //Total bill calculation
	cout << setprecision(2) << fixed << showpoint; //rounds off to 2 decimal places
	cout << "Sales tax: $" << setw(8) << salesTax << "\n";
	cout << "Tip (20%): $" << setw(8) << tip << "\n";
	cout << "Total:" << setw(6)<< "$" << setw(8)<< total;
	return 0;
}
