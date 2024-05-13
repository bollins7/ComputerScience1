#include <iostream>
#include <vector>

int main() {
    // Initialize the array with the player's lucky numbers
    std::vector<int> luckyNumbers = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};

    // Get this week's winning number from the player
    int winningNumber;
    std::cout << "Enter this week's winning 5-digit number: ";
    std::cin >> winningNumber;

    // Perform linear search through the list of lucky numbers
    bool isWinner = false;
    for (int number : luckyNumbers) {
        if (number == winningNumber) {
            isWinner = true;
            break;
        }
    }

    // Report whether or not one of the tickets is a winner this week
    if (isWinner) {
        std::cout << "Congratulations! You have a winning ticket this week." << std::endl;
    } else {
        std::cout << "Sorry, none of your tickets is a winner this week." << std::endl;
    }

    return 0;
}