#include<iostream>
using namespace std;
int main()
{
    //pointer- data type which holds the addr of other data types
    int a=3;
    // int* b=&a;
    int *b;
    b = &a;
    //  & -> address of operator
    // * -> (value at operator)dereference operator
    cout<<"the address of a: "<<b<<endl;
    cout<<"the address of a: "<<&a<<endl;

    cout<<"the value stored at the address of b is: "<<*b<<endl;

    // pointer to pointer
    int **c = &b;
    cout<<"the addr of b is "<<&b<<endl;
    cout<<"the addr of b is "<<c<<endl;
    cout<<"the value stored at c is "<<**c<<endl;
    

    return 0;
}