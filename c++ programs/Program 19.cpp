#include <iostream>
using namespace std;

int main()
 {
    int ageYears;
    int ageMonths, ageDays;

    ageYears = 20;  

    ageMonths = ageYears * 12;
    ageDays = ageYears * 365;  

    cout << "Age in years: " << ageYears << endl;
    cout << "Age in months: " << ageMonths << endl;
    cout << "Age in days: " << ageDays << endl;

    return 0;
}
