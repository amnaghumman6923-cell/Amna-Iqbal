
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double PI = 3.1417;
    double R, H;

    cout << "Enter radius (R): ";
    if(!(cin >> R)) return 0;
    cout << "Enter height (H): ";
    if(!(cin >> H)) return 0;

    double volume = PI * R * R * H;
    cout << fixed << setprecision(4);
    cout << "Volume of cylinder = " << volume << endl;
    return 0;
}