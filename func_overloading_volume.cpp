
#include<iostream>
using namespace std;
int volume(int a){
    return a*a*a;
}

int volume (int l, int b, int h)
{
    return (l*b*h);
}
int volume(double  r,int h){
    return(3.14*r*r*h);
}

int main()
{
    cout<<"vol of cylinder is of radius 4 and height 7 is: "<<volume(4,7)<<endl;
    cout<<"vol of cube is of size 7: "<<volume(7)<<endl;
    cout<<"vol of rectangular box is of length 4 and height 7 and breadth 8 is: "<<volume(4,7,8);
    return 0;
}