//  Given three points (x1, y1), (x2, y2) and  (x3, y3), write a program to check if all the three points fall on one straight line.
#include<iostream>
using namespace std;
bool colinear(int x1,int y1,int x2,int y2,int x3,int y3){
    //if the area of triangle formed by these three points is eqal to zero 
    //then the points are colinear
    int area=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    return area==0;
}
int main()
{
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter x1 and y1 : ";
    cin>>x1>>y1;
    cout<<"Enter x2 and y2 : ";
    cin>>x2>>y2;
    cout<<"Enter x3 and y3 : ";
    cin>>x3>>y3;
    cout<<"("<<x1<<","<<y1<<")"<<endl;
    cout<<"("<<x2<<","<<y2<<")"<<endl;
    cout<<"("<<x3<<","<<y3<<")"<<endl;
    if(colinear(x1,y1,x2,y2,x3,y3)){
        cout<<"All these points are falls on stright line.";
    }else{
        cout<<"All these points are not falls on stright line.";

    }
    return 0;
}