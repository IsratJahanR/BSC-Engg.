#include<iostream>
using namespace std;
int main()
{
int x=-1;
cout<<"before try"<<endl;
try{
cout<<"inside try"<<endl;
if(x<0)
{
    throw x;
    cout<<"After throw"<<endl;
}
}
catch(...)
{
    cout<<"exception caught"<<endl;
}
}
