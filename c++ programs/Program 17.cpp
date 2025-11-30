#include <iostream>
using namespace std;

int main()  
{
    double num = 15.58971;
    int integralPart;
    double fractionalPart;
    
    integralPart = static_cast<int>(num);

    fractionalPart = num - integralPart;

    cout << "Number: " << num << endl;
    cout << "Integral part: " << integralPart << endl;
    cout << "Fractional part: " << fractionalPart << endl;

    return 0;
}
