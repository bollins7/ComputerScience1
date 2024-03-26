//  This program will input total sales (sales plus tax)
//  that a business generated for a particular month.
//  The program will also input the state and local sales tax percentage.
//  It will output the total sales plus the state tax and local tax to be paid. 
//  The output will be in fixed notation with 2 decimal places.
//  the  (to 2 decimal places) of those grades to the screen

//Programmer:  Harry Willobean

#include<iostream>
#include<iomanip>
using namespace std;


int main()

{

	float totalSales;		// total sales 
	float percentStateTax;  // State tax %
	float percentLocalTax;  // Local tax %
	float SalesNoTax;       // Sales without tax  found by dividing totalsales by
							// 1+percentStateTax + percentLocalTax
	float stateTax;         // Amount of state tax
	float localTax;			// Amount of local tax

	cout << setprecision(2) << fixed << showpoint;
	cout << "Please input the total sales for the month" << endl;
	cin >> totalSales;
	cout << endl << "Please input the state tax percentage in decimal form (.02 for 2%)"<<endl;
	cin >> percentStateTax;
	cout << endl << "Please input the local tax percentage in decimal form (.02 for 2%)"<<endl;
	cin >> percentLocalTax;

	SalesNoTax = totalSales / (1+percentStateTax + percentLocalTax);
	stateTax = SalesNoTax * percentStateTax; //tax found by taking sales (without tax) times the tax percent
	localTax =SalesNoTax * percentLocalTax;

	cout << endl << "The Total sales for the month is $" << totalSales << endl;
    cout << endl << "The State tax for the month is   $" << stateTax << endl;
	cout << endl << "The Local tax for the month is   $" << localTax << endl;

	return 0;
}