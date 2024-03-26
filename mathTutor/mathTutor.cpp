#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

// Function to generate a random number between min and max
int generateRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    // Seed the random number generator
    srand(time(nullptr));

    // Generate two random numbers between 50 and 450
    int num1 = generateRandomNumber(50, 450);
    int num2 = generateRandomNumber(50, 450);

    // Display the numbers to be added, right-aligned
    cout << "Add the following two numbers:" << endl;
    cout << setw(6) << num1 << endl;
    cout << "+" << setw(5) << num2 << endl;
    cout << "------" << endl;
    cout << "Press Enter to see the answer...";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.get();

    // Calculate and display the sum
    int sum = num1 + num2;
    cout << setw(6) << sum << endl;

    return 0;
}