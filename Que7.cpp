// Ques : Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0). 
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter x and y : ";
    cin>>x>>y;
    cout<<"("<<x<<","<<y<<")"<<endl;
    if(x==0) {
        if(y==0) cout<<"It is at origin";
        else cout<<"It is lies on x-axis";
    }
    else {
        if(x==0) cout<<"It is at origin";
        else cout<<"It is lies on y-axis";
    }
    return 0;
}