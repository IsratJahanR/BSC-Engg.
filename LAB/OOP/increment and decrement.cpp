#include<iostream>
using namespace std;
int main()
{
    int x1=3,x2=3,x3=3,x4=3;
    int y1=x1--, y2=--x2, y3=x3++, y4=++x4;
    cout<<"post decrement="<<y1<<endl;
    cout<<"pre decrement="<<y2<<endl;
    cout<<"post increment="<<y3<<endl;
    cout<<"pre increment="<<y4<<endl;
}
