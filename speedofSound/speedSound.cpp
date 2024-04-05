#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double SPEED_AIR = 1100;   // Speed of sound in air (ft/s)
    const double SPEED_WATER = 4900; // Speed of sound in water (ft/s)
    const double SPEED_STEEL = 16400; // Speed of sound in steel (ft/s)

    int choice;
    double distance, time;

    cout << "Select a medium:" << endl;
    cout << "1. Air" << endl;
    cout << "2. Water" << endl;
    cout << "3. Steel" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter the distance in feet: ";
            cin >> distance;
            time = distance / SPEED_AIR;
            cout << "Time taken for the sound wave to travel: " << fixed << setprecision(2) << time << " seconds" << endl;
            break;
        case 2:
            cout << "Enter the distance in feet: ";
            cin >> distance;
            time = distance / SPEED_WATER;
            cout << "Time taken for the sound wave to travel: " << fixed << setprecision(2) << time << " seconds" << endl;
            break;
        case 3:
            cout << "Enter the distance in feet: ";
            cin >> distance;
            time = distance / SPEED_STEEL;
            cout << "Time taken for the sound wave to travel: " << fixed << setprecision(2) << time << " seconds" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
