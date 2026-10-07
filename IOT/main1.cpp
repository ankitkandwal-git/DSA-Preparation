#include <iostream>

using namespace std;

int main() {
    int buttonState;

    cout << "IoT Practical: Push Button and Buzzer Simulation\n";

    while (true) {
        cout << "\nPress Button (1 = Press, 0 = Release, -1 = Exit): ";
        cin >> buttonState;

        if (buttonState == -1) {
            cout << "Program Exited." << endl;
            break;
        }

        if (buttonState == 1) {
            cout << "Button Pressed" << endl;
            cout << "Buzzer ON" << endl;
        }
        else if (buttonState == 0) {
            cout << "Button Released" << endl;
            cout << "Buzzer OFF" << endl;
        }
        else {
            cout << "Invalid Input!" << endl;
        }
    }

    return 0;
}