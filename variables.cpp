#include<iostream>
using namespace std;

int glo =6;
void sum(){
    int a;
    int b; //local variable
    cout<<glo;
}
int main(){
    // int a = 4;
    // int b = 5;
    int a=14,b=15;
    float pi = 3.14;
    char c = 'd';
    int glo = 9;
    glo = 78;
    cout<<"the value of a is "<<a<<". \n The value of b is "<<b;
    sum();
    // \n is used for newline in o/p 
    cout<<"\n value of pi: "<<pi;
    cout<<"\n the value of c is "<<c;
    cout<<"\n"<<glo;
    //precedence of local vs global variable then local variable is given precedence
    return 0;
}