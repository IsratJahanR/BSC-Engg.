#include<iostream>
using namespace std;
int main()
{
    int a,b;
    double result;
    cin>>a>>b;
    try{
        if(b==0)
        throw(b);
        result=a(double)/b;
        cout<<result<<endl;

    }
    catch (int x)
    {
        cout<<"divided by zero is not possible"<<endl;
    }
}
