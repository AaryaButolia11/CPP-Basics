#include<iostream>
using namespace std;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};
// in UNION u can only use one data type at a time and cant use the others while using one

// the max is alloted for memory in union

int main()
{
    union money m1;

    m1.rice=32;
    m1.car='a'; //as we are using now car value then our rice value gets overwritten 
    cout<<m1.rice<<endl;
    cout<<m1.car;

 return 0;
}

 // At once, only one datatype from union can be used
    // the other gets overwritten so a garbage value is returned
