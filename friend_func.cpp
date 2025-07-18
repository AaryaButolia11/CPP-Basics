#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // below line means sum complex is allowed to do anything with my data
    friend Complex sumComplex(Complex o1, Complex o2);
    void printNumber()
    {
        cout << "your no is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c2.setNumber(5, 8);
    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/* Prop of friend func

1. Not in the scope of class
2. Allows the use of priv members
3. Cannot be invoked by obj of class
4. usually contains objs as args
5. can be declared inside public or priv of class
6. it cannot access the members directly by the their name and need to object_name.member_name to access any member
*/