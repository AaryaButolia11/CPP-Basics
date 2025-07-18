#include<iostream>
using namespace std;

int add(int a,int b){
    cout<<"using function with 2 args"<<endl;
    return a+b;
}
int add(int a,int b, int c){
    cout<<"using function with 3 args"<<endl;
    return a+b+c;
}


int main()
{
    cout<<"the sum of 3 and 6 is: "<<add(3,6)<<endl;
    cout<<"the sum of 3, 7 and 6 is: "<<add(3,7,6)<<endl;

   return 0;
}