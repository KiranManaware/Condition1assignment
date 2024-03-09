// Write a C++ program to input any character and check whether it is the alphabet, digit or special character.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter input : ";
    cin>>ch;
    if((ch>=65 && ch<=90)||(ch>=97&& ch<=122))cout<<"Alphbet."<<endl;
    else if(ch>=48 && ch<=57) cout<<"Digit."<<endl;
    else cout<<"Special character."<<endl;
    
    return 0;
}