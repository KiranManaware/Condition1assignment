// Ques : Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.
#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter radius of circle : ";
    cin>>r;
    int area = 3.14*r*r;
    int circum = 2*3.14*r;
    if(area>circum) cout<<"Numerically Area is greater than circumference :"<<area;
    else cout<<"Numerically Area  not greater than circumference :"<<circum;
    return 0;
}