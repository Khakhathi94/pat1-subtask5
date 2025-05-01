#include <iostream>
using namespace std;

int main() {
    int temp1, temp2, temp3;

    // Input first temperature
    cout << "Enter the first temperature reading: ";
    cin >> temp1;

    // Input second temperature
    cout << "Enter the second temperature reading (5 minutes later): ";
    cin >> temp2;

    // Check temperature difference between first and second
    int diff = temp2 - temp1;
    if (diff > 50) {
        cout << "Reduce fryer heat before taking the third reading." << endl;
    } else if (diff < 10) {
        cout << "Increase the Fryer heat before taking the third reading." << endl;
    }

    // Input third temperature
    cout << "Enter the third temperature reading (5 minutes later): ";
    cin >> temp3;

    // Final check for oil readiness
    if (temp3 >= 150 && temp3 <= 190) {
        cout << "You may start frying the Magwinyas." << endl;
    } else {
        cout << "Oil is not ready for frying!" << endl;
    }

    return 0;
}
