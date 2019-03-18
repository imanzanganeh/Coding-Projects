// Iman Arfa-Zanganeh
// Assignment #1
// Problem #1
#include <iostream>

using namespace std;
int main() 
{
	cout.setf(ios::fixed);//fixed point notation
	cout.setf(ios::showpoint);//show decimal
	cout.precision(2);//fixes output to 2 decimal places*/
	double percentage = 0.58;
	double totalSales;
	cout << "Enter total sales: ";
	cin >> totalSales;
	double salesDivision = percentage * totalSales;//Sales division calculation
	cout << "West Coast sales division generated: $" << salesDivision;
	return 0;
}
