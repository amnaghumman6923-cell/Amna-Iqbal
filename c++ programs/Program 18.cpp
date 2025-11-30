#include <iostream>
using namespace std;

int main() {
    double vi, t, a, s;

    cout << "Enter initial velocity (vi): ";
    cin >> vi;
    cout << "Enter time (t): ";
    cin >> t;
    cout << "Enter acceleration (a): ";
    cin >> a;

    s = vi * t + 0.5 * a * t * t;

    cout << "The value of s is: " << s << endl;

    return 0;
}
