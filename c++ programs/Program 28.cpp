#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    double disc;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Enter value of c: ";
    cin >> c;

    disc = (b * b) - (4 * a * c);

    cout << "The value of disc = " << disc << endl;

    return 0;
}
