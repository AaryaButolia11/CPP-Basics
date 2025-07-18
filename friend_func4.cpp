#include <iostream>
using namespace std;
class C2;
class C1
{
    int val;

public:
    void inData(int a)
    {
        val = a;
    }
    void display(void)
    {
        cout << val << endl;
    }
    friend void exchange(C1 &, C2 &);
};
class C2
{
    int val2;
    friend void exchange(C1 &, C2 &);

public:
    void inData(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(C1 &x, C2 &y)
{
    int temp = x.val;
    x.val = y.val2;
    y.val2 = temp;
}
int main()
{
    C1 oc1;
    C2 oc2;

    oc1.inData(32);
    oc2.inData(67);
    exchange(oc1, oc2);
    cout << "the value after exchange: ";
    oc1.display();
    cout << "the value after exchange: ";
    oc2.display();

    return 0;
}