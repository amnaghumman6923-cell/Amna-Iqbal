#include <iostream>
using namespace std;

int main() {
    double millimeters;
    double inches;
    
    cout << "Enter length in millimeters: ";
    cin >> millimeters;

    inches = millimeters / 25.4;  // 1 inch = 25.4 mm

    cout << millimeters << " millimeters is equal to " << inches << " inches." << endl;

    return 0;
}
