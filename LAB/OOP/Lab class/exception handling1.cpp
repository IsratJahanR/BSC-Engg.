#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=0;
    try
    {
     int c=a/b;
     cout<<c<<endl;

    }
    catch(...)
    {
        cout<<"exceptiom caught"<<endl;
    }
}
