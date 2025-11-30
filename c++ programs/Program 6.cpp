#include <iostream>
using namespace std;

int main() {
    int ageYears, ageMonths;

    cout << "Enter age in years: ";
    cin >> ageYears;

    ageMonths = ageYears * 12;

    cout << "Age in months = " << ageMonths << endl;

    return 0;
}
