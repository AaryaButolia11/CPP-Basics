#include<iostream> 
#include<iomanip>
using namespace std;
int main()
{
    int a=3,b=78,c=1233;
    // setw is used to keep value in a specific place in o/p here eg4
    cout<<"the value of a with setw is: "<<setw(4)<<a<<endl;
    cout<<"the value of b with setw is: "<<setw(4)<<b<<endl;
    cout<<"the value of c with setw is: "<<setw(4)<<c<<endl;

    cout<<"the value of a without setw is: "<<a<<endl;
    cout<<"the value of b without setw is: "<<b<<endl;
    cout<<"the value of c without setw is: "<<c<<endl;
 return 0;
  // endl is a manipulator in C++ that can be used to put a linebreak in the output
    // setw is a manipulator in C++ that can be used to set a width for the variable value
}