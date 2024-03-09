// Ques : Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3;
    cout<<"Enter 1st side : ";
    cin>>s1;
    cout<<"Enter 2nd side : ";
    cin>>s2;
    cout<<"Enter 3rd side : ";
    cin>>s3;
    if(s1==s2&&s2 ==s3) cout<<"A triangle is equilateral."<<endl;//Three sides are equal
    else if(s1==s2 || s2==s3 ||  s1==s3) cout<<"A triangle is isosceles."<<endl;//two side are equal
    else cout<<"A triangle is scalene."<<endl;//all three side are different
    return 0;
}