#include<iostream>
using namespace std;
int main()
{
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x%2==0)
            cout<<"even"<<endl;
        else
            cout<<"odd"<<endl;
    }
}
