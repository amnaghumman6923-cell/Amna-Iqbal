#include <iostream>
#include <cmath>
using namespace std;

int main()
 {
    double a, b, c, s, area;

    cout << "Enter side a: ";
    cin >> a;

    cout << "Enter side b: ";
    cin >> b;

    cout << "Enter side c: ";
    cin >> c;

    s = (a + b + c) / 2.0;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "The area of the triangle is: " << area << endl;

    return 0;
}