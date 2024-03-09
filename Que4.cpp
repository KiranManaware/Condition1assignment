// Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.
#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cout<<"Enter length : ";
    cin>>l; 
    cout<<"Enter breadth : ";
    cin>>b;
    int ar= l*b;
    int pm=2*(l+b); 
    if(ar>pm) cout<<"Numerically  the area of the rectangle is greater than its perimeter. :"<<ar;
    else cout<<"Numerically  the area of the rectangle is not greater than its perimeter. :"<<pm;
    return 0;
}
