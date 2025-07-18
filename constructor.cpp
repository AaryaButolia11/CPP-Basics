#include <iostream>
using namespace std;

class Complex
{
public:
    int a, b;
    // creating a constructor
    // its a special member func with same name as the class. it is automatically invoked!
    // it is used to initiate the obj of its class
    Complex(void);
    void printData()
    {
        cout << "your no is: " << a << " + " << b << "i " << endl;
    }
};

Complex ::Complex(void) // this is a default constructor as it takes no para
{
    a = 10;
    b = 1;
}
int main()
{
    Complex c1, c2, c3;
    c1.printData();
    c2.printData();
    c3.printData();
    return 0;
}


/*
1. this should be declared in public section
2. this is invoked when obj is creaated
3. do not have return types
4. they cant return values
5. we cannot refer to their addr.
*/