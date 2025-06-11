#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a+b;
    return c;

}

void swap(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;

}
int main()
{
    int a=4;
    int b=5;
    // cout<<"The sum of 4 & 5 is "<<sum(4,5);
    cout<<"the value of a is: "<<a<<" and the b is : "<<b<<endl;
    swap(a,b);
    cout<<"the value of a is: "<<a<<" and the b is : "<<b<<endl;
 return 0;
}