#include <iostream>
#include <string>
using namespace std;

int main()
 {
    string name;
    int age;
    float height;
    char gender;

    cout << "Enter name: ";
    getline(cin, name);  

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter height (in cm): ";
    cin >> height;

    cout << "Enter gender (M/F): ";
    cin >> gender;

    cout << "\nStudent Details:" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Height: " << height << " cm" << endl;
    cout << "Gender: " << gender << endl;

    return 0;
    
}
