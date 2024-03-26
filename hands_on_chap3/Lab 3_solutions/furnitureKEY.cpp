//  This program inputs the amount of chairs sold for each of three chair styles
// 
//		Style						Price Per Chair
//		American Colonial				$ 85.00 
//		Modern				        	$57.50
//		French Classical				$127.75
//	The program will print the total dollar sales of each style
//  as well as the total sales of all chairs in fixed point notation with two decimal places.


// Programmer:  Harry Willobean

#include<iostream>
#include<iomanip>
using namespace std;


const float COLONIAL = 85;
const float MODERN = 57.50;
const float CLASSICAL = 127.75;

int main()

{

	int  colonial;   // holds the number of colonial chairs sold
	int  modern;     // holds the number of modern chairs sold
    int  classical;  // holds the number of classical chairs sold

	cout << setprecision(2) << fixed << showpoint;
	cout << "Please input the number of American Colonial chairs sold" << endl;
	cin >> colonial;
	cout << endl << "Please input the number of Modern chairs sold" << endl;
	cin >>modern;
	cout << endl << "Please input the number of French classical chairs sold" << endl;
	cin >> classical;
	
	cout << endl << "The total sales of American Colonial chairs  $" << colonial * COLONIAL << endl;
	cout << endl << "The total sales of modern chairs  $" << modern * MODERN << endl;
	cout << endl << "The total sales of French Classical chairs  $" << classical * CLASSICAL << endl;
	cout << endl << "The total sales of all chairs  $" 
		 << modern * MODERN + colonial * COLONIAL + classical * CLASSICAL <<endl;

    return 0;
}