#include<iostream>
using namespace std;
int main()
{   
    int marks[4]={23,45,56,89};
    int mathMarks[4];
    mathMarks[0]=2278;
    mathMarks[1]=738;
    mathMarks[2]=378;
    mathMarks[3]=578;
    cout<<"thesse are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;


    marks[2]=455; /*you can change values of an array */
    cout<<"thesse are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<"the value of marks "<<i<<" - " << marks[i]<<endl;
    }


    //pointers and arrays
    int *p = marks;
    cout<<*(p++)<<endl;
    cout<<"the value of *p is "<<*p<<endl;
    cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is "<<*(p+3)<<endl;
    return 0;
}

// if ptr points to first element of an array, ptr+1 points to the second, and so on
    // also, if ptr=32 is an integer pointer, then, ptr+1=32+4=36, as sizeof(int)=4
    // sore ga pointer arithmetic: address(new) = address(current) + (i*sizeof(datatype))