//This program will read in 3 grades from the keyboard and will
//print the average (to 2 decimal places) of those grades to the screen


//Programmer:  Harry Willobean

#include<iostream>
#include<iomanip>
using namespace std;


int main()

{

	float grade1, grade2, grade3;
	float average;

	cout << setprecision(2) << fixed << showpoint;
	cout << "Please input the first grade" << endl;
	cin >> grade1;
	cout << "Please input the second grade" << endl;
	cin >> grade2;
	cout << endl << "Please input the third grade" << endl;
	cin >> grade3;

	average = (grade1 + grade2 + grade3) / 3;
	
	cout << endl << "The average of the three grades is " << average <<endl;

	return 0;
}