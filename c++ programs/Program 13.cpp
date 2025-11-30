
#include <iostream>
#include <iomanip>
#define PI 3.1417
using namespace std;

int main() 
 {
    double r;
    cout << "Enter radius (r): ";
    if(!(cin >> r)) return 0;

    double area = PI * r * r;
    cout << fixed << setprecision(4);
    cout << "Area of circle = " << area << endl;
    return 0;
}