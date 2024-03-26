// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.

//  Dean DeFino

#include <iostream>
#include <iomanip>
using namespace std;




int main()

{
	int   quantity;			// contains the amount of items purchased
	float itemPrice;		// contains the price of each item
	float totalBill;		// contains the total bill.  


	cout << setprecision(2) << fixed << showpoint;  //formatted output

	cout << "Please input the number of items bought" << endl;   

	cin >> quantity;
	cout << endl << "Pleae input the price of each item" << endl;
	cin >> itemPrice;

	totalBill = quantity * itemPrice;

	cout << endl << "The total bill is $" << setw(5) << totalBill << endl;



	return 0;
}