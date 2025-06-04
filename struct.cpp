#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
}ep;

int main()
{
    // struct employee harry;
    ep harry;   
    harry.eId=1;
    harry.favChar='a';
    harry.salary=10000000;
    cout<<"the value  is: "<<harry.eId<<endl;
    cout<<"the value  is: "<<harry.favChar<<endl;
    cout<<"the value  is: "<<harry.salary<<endl;

 return 0;
}