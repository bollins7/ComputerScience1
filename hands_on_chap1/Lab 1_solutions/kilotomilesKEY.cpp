// This program takes a value from the user that represents the number of 
// kilometers traveled and will convert that number to miles
// The user will be prompted to enter the number

// Dean DeFino

#include <iostream>
using namespace std;
int main()

{

	float kilotomiles;
					//prompt user to enter the number of kilometers
	cout << "Enter the number of kilometers" << endl;
	cout << "Then hit enter" << endl;
	cin >> kilotomiles;
	
	cout << endl << kilotomiles << " kilometers" << " = " << kilotomiles * 0.621
		 << " miles" << endl;
	
	return 0;

}







