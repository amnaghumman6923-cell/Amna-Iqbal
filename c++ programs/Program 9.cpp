#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, num4, maxNum;

    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    maxNum = num1;

    if (num2 > maxNum) {
        maxNum = num2;
    }
    if (num3 > maxNum) {
        maxNum = num3;
    }
    if (num4 > maxNum) {
        maxNum = num4;
    }

    cout << "Maximum number is: " << maxNum << endl;

    return 0;
}
