#include<iostream>
using namespace std;

// function prototyping

// type function-name(argunments)
int sum(int a,int b);
void hello(void);
int main()
{
    int num1,num2;
    cout<<"Enter no 1 : ";
    cin>>num1;
    cout<<"Enter no 2 : ";
    cin>>num2;
    cout<<sum(num1,num2)<<endl;
    hello();
    return 0;
}
int sum(int a, int b){
    int c= a+b;
    return c;

}
// Formal parameters a & b will take value from the actual parameters num1 and num2.

void hello(){
    cout<<"Hello World!";
}