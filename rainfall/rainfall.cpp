#include <iostream>
#include <iomanip>
#include <string>

const int MONTHS = 12;

void enterRainfall(double rainfall[], std::string months[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter rainfall for " << months[i] << ": ";
        std::cin >> rainfall[i];
        while (rainfall[i] < 0) {
            std::cout << "Rainfall cannot be negative. Please enter a valid value.\n";
            std::cout << "Enter rainfall for " << months[i] << ": ";
            std::cin >> rainfall[i];
        }
    }
}

void selectionSort(double arr[], std::string months[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int maxIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            std::swap(arr[i], arr[maxIndex]);
            std::swap(months[i], months[maxIndex]);
        }
    }
}

int main() {
    double rainfall[MONTHS];
    std::string months[MONTHS] = {"January", "February", "March", "April", "May", "June",
                                   "July", "August", "September", "October", "November", "December"};
    
    enterRainfall(rainfall, months, MONTHS);
    selectionSort(rainfall, months, MONTHS);

    double total = 0;
    for (int i = 0; i < MONTHS; ++i) {
        total += rainfall[i];
    }
    double average = total / MONTHS;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Total rainfall: " << total << std::endl;
    std::cout << "Average rainfall: " << average << std::endl;
    std::cout << "Months sorted by rainfall (highest to lowest):\n";
    for (int i = 0; i < MONTHS; ++i) {
        std::cout << months[i] << ": " << rainfall[i] << std::endl;
    }

    return 0;
}
