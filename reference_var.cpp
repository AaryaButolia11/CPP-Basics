#include<iostream>
using namespace std;
// reference variables
int main(){
    float x=255;
    float &y=x; //y is a reference variable pointing x
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
} // namespace std
