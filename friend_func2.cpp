#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    // Only declaration here
    int sumRealCalc(Complex, Complex);
    int sumCompCalc(Complex, Complex);
};

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Granting access to only this specific method
    friend int Calculator ::sumRealCalc(Complex, Complex);
    friend int Calculator ::sumCompCalc(Complex, Complex);

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Definition of the friend function
int Calculator ::sumRealCalc(Complex o1, Complex o2)
{
    return (o1.a + o2.a); // Accessing private members
}
int Calculator ::sumCompCalc(Complex o1, Complex o2)
{
    return (o1.b + o2.b); // Accessing private members
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    Calculator calc;

    int result = calc.sumRealCalc(o1, o2);
    int result1 = calc.sumCompCalc(o1, o2);
    cout << "Sum of real parts = " << result << endl;
    cout << "Sum of complex parts = " << result1 << endl;

    return 0;
}
