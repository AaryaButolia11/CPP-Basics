#include<iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    
    return n*factorial(n-1);
}


int main()
{   
    // factorial of a no.
    // 6! =6*5*4*3*2*1
    // 0! = 1 -> by def.
    //  n! = n * (n-1)!  

    cout<<factorial(6);
 return 0;
}