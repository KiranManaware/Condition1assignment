// Ques : If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks. 
#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cout<<"Enter marks of First,Second and Third students ";
    cin>>A>>B>>C;
    if(A<B && A<C) cout<<"First student score least marks "<<A<<endl;
    else if(B<C) cout<<"Second student score least marks "<<B<<endl;
    else cout<<"Third student score least marks "<<C<<endl;
    return 0;
}