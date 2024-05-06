#include <iostream>
#include <iomanip>

const int MONTHS = 12;

void enterRainfall(double rainfall[], int size) {
    for (int i = 0; i < size; ++i) {
        do {
            std::cout << "Enter rainfall for Month " << i+1 << ": ";
            std::cin >> rainfall[i];
            if (rainfall[i] < 0) {
                std::cout << "Rainfall cannot be negative. Please enter a valid value.\n";
            }
        } while (rainfall[i] < 0);
    }
}

double calculateTotal(double rainfall[], int size) {
    double total = 0;
    for (int i = 0; i < size; ++i) {
        total += rainfall[i];
    }
    return total;
}

double calculateAverage(double total) {
    return total / MONTHS;
}

int findMaxIndex(double rainfall[], int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (rainfall[i] > rainfall[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int findMinIndex(double rainfall[], int size) {
    int minIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (rainfall[i] < rainfall[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

int main() {
    double rainfall[MONTHS];
    
    enterRainfall(rainfall, MONTHS);

    double total = calculateTotal(rainfall, MONTHS);
    double average = calculateAverage(total);

    int maxIndex = findMaxIndex(rainfall, MONTHS);
    int minIndex = findMinIndex(rainfall, MONTHS);

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Total rainfall: " << total << std::endl;
    std::cout << "Average rainfall: " << average << std::endl;
    std::cout << "Least rainfall in: Month " << minIndex+1 << std::endl;
    std::cout << "Most rainfall in: Month " << maxIndex+1 << std::endl;

    return 0;
}
