#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNo()
    {
        cout << "your complex no is: " << a << " + i" << b << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNo();

    c2.setData(3, 4);
    c2.printNo();

    c3.setDataBySum(c1, c2);
    c3.printNo();

    return 0;
}