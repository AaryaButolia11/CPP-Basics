#include <iostream>

// There are 2 types of header files:
// 1. System header files - come with the compiler
// 2. User-defined header files - written by the programmer
// #include "this.h" // File must be present in the current directory

using namespace std;

int main()
{
    cout << "Following are the types of operators in C++!" << endl;

    // Arithmetic Operators
    int a = 4, b = 5;
    cout << "The value of a + b is: " << a + b << endl;
    cout << "The value of a - b is: " << a - b << endl;
    cout << "The value of a * b is: " << a * b << endl;
    cout << "The value of a / b is: " << a / b << endl; // Integer division
    cout << "The value of a % b is: " << a % b << endl;
    cout << "The value of a++ is: " << a++ << endl; // Prints then increments
    cout << "The value of ++a is: " << ++a << endl; // Increments then prints

    // Assignment Operators
    // int a = 3;
    // int b = 9; // Used to assign values to variables

    // Comparison Operators
    cout << "The value of a == b is: " << (a == b) << endl;
    cout << "The value of a != b is: " << (a != b) << endl;
    cout << "The value of a < b is: " << (a < b) << endl;
    cout << "The value of a > b is: " << (a > b) << endl;
    cout << "The value of a >= b is: " << (a >= b) << endl;
    cout << "The value of a <= b is: " << (a <= b) << endl;


    //logical operators
    cout<<"Following are the logical operators in c++"<<endl;
    cout<<"The value of this AND logical operator is "<<((a==b)&&(a<b))<<endl;
    cout<<"The value of this  OR logical operator is "<<((a==b)||(a<b))<<endl;
    return 0;
}
