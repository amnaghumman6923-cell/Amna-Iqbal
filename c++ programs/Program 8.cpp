#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;

    // Input
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Calculation
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    // Output
    cout << "Temperature in Celsius = " << celsius << endl;

    return 0;
}
