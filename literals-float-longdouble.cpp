#include<iostream>
using namespace std;
int main()
{
    float d=34.4f;
    long double e = 34.4l;
    // use 'f' or 'F' to make any value with decimal as foat or else by default it will be passed as a double
    // use 'l' or 'L' to make it long decimal
    cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e;
    cout<<"the size of 34.4f is "<<sizeof(d)<<endl<<"the size of 34.4l is "<<sizeof(e);
    return 0;

    
}
