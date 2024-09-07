#include<iostream>
using namespace std;
int main()
{
    try
    {
        int x,y;
        cin>>x>>y;
        double result=(double)x/y;
        if(y==0)
            throw y;
        cout<<result<<endl;
    }
    catch(...)
    {
        cout<<"exception caught"<<endl;
    }
}
