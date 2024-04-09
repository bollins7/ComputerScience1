#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (){
    string name, front, back;

    ifstream file("LineUp.txt");

    if (file.is_open()) {
        file >> name;
        front = back = name;

        while (file >> name) {
            if (name < front) {
                front = name;
            }
            if (name > back) {
                back = name;
            }
        }
        file.close();

        cout << front << " is in the front" << endl;
        cout << back << " is in the back" << endl;
    }
}