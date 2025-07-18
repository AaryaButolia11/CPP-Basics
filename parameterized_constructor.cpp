#include <iostream>
using namespace std;

class Complex
{
public:
    int a, b;
    Complex(int, int);
    void printData()
    {
        cout << "your no is: " << a << " + " << b << "i " << endl;
    }
};

Complex ::Complex(int x, int y) // this is a paramerized constructor as it takes no para
{
    a = x;
    b = y;
}
int main()
{
    // implicit call
    Complex c1(4, 6), c2(5, 8);
    c1.printData();
    c2.printData();

    Complex c3 = Complex(6, 7);
    c3.printData();
    return 0;
}
