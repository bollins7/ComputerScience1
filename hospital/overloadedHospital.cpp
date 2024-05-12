#include <iostream>

using namespace std;

// Function prototypes
double calculateCharges(int days, double rate, double medicationCharges, double serviceCharges);
double calculateCharges(double medicationCharges, double serviceCharges);

int main() {
    char patientType;
    int days;
    double rate, medicationCharges, serviceCharges;

    cout << "Enter 'I' if the patient was admitted as an inpatient, 'O' if the patient was an outpatient: ";
    cin >> patientType;

    // Input validation for patient type
    while (patientType != 'I' && patientType != 'i' && patientType != 'O' && patientType != 'o') {
        cout << "Invalid input. Please enter 'I' or 'O': ";
        cin >> patientType;
    }

    // Inpatient case
    if (patientType == 'I' || patientType == 'i') {
        cout << "Enter the number of days spent in the hospital: ";
        cin >> days;
        
        // Input validation for number of days
        while (days < 0) {
            cout << "Invalid input. Please enter a non-negative number of days: ";
            cin >> days;
        }

        cout << "Enter the daily rate: ";
        cin >> rate;

        // Input validation for daily rate
        while (rate < 0) {
            cout << "Invalid input. Please enter a non-negative daily rate: ";
            cin >> rate;
        }

        cout << "Enter hospital medication charges: ";
        cin >> medicationCharges;

        // Input validation for medication charges
        while (medicationCharges < 0) {
            cout << "Invalid input. Please enter non-negative medication charges: ";
            cin >> medicationCharges;
        }

        cout << "Enter charges for hospital services: ";
        cin >> serviceCharges;

        // Input validation for service charges
        while (serviceCharges < 0) {
            cout << "Invalid input. Please enter non-negative service charges: ";
            cin >> serviceCharges;
        }

        // Calculate and display total charges for inpatient
        double totalCharges = calculateCharges(days, rate, medicationCharges, serviceCharges);
        cout << "Total charges: $" << totalCharges << endl;
    } 
    // Outpatient case
    else {
        cout << "Enter charges for hospital services: ";
        cin >> serviceCharges;

        // Input validation for service charges
        while (serviceCharges < 0) {
            cout << "Invalid input. Please enter non-negative service charges: ";
            cin >> serviceCharges;
        }

        cout << "Enter hospital medication charges: ";
        cin >> medicationCharges;

        // Input validation for medication charges
        while (medicationCharges < 0) {
            cout << "Invalid input. Please enter non-negative medication charges: ";
            cin >> medicationCharges;
        }

        // Calculate and display total charges for outpatient
        double totalCharges = calculateCharges(medicationCharges, serviceCharges);
        cout << "Total charges: $" << totalCharges << endl;
    }

    return 0;
}

// Function definition for inpatient charges calculation
double calculateCharges(int days, double rate, double medicationCharges, double serviceCharges) {
    return (days * rate) + medicationCharges + serviceCharges;
}

// Function definition for outpatient charges calculation
double calculateCharges(double medicationCharges, double serviceCharges) {
    return medicationCharges + serviceCharges;
}
