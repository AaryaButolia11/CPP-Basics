#include <iostream>
using namespace std;

class Numbers
{
    int a, b, c;

public:
    // Constructor with default arguments
    Numbers(int x = 0, int y = 0, int z = 0)
    {
        a = x;
        b = y;
        c = z;
    }

    void printValues()
    {
        cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    }
};

int main()
{
    Numbers n1;          // Uses all default values: 0, 0, 0
    Numbers n2(5);       // Sets a = 5, b = 0, c = 0
    Numbers n3(3, 4);    // Sets a = 3, b = 4, c = 0
    Numbers n4(1, 2, 3); // Sets a = 1, b = 2, c = 3

    cout << "n1: ";
    n1.printValues();
    cout << "n2: ";
    n2.printValues();
    cout << "n3: ";
    n3.printValues();
    cout << "n4: ";
    n4.printValues();

    return 0;
}
