#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;   

    cout << "Before interchange:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Interchanging values
    int temp = a;
    a = b;
    b = temp;

    cout << "\nAfter interchange:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
