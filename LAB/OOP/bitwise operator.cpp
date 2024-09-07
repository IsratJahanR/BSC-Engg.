#include<iostream>
using namespace std;
int main()
{
    int a=3,b=2,c1,c2,c3,c4,c5,c6;
    c1=a&b;
    c2=a|b;
    c3=~a;
    c4=a^b;
    c5=a>>2;
    c6=a<<2;
    cout<<"bitwise AND :"<<c1<<endl;
    cout<<"bitwise OR  :"<<c2<<endl;
    cout<<"Bitwise NOT :"<<c3<<endl;
    cout<<"bitwise X-OR:"<<c4<<endl;
    cout<<"right shift :"<<c5<<endl;
    cout<<"left shift  :"<<c6<<endl;

}
