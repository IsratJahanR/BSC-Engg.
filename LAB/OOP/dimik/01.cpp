#include<iostream>
using namespace std;
int main()
{
    int i,n,x[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(i=0;i<n;i++)
    {
        if(x[i]%2==0)
            cout<<"even"<<endl;
        else
            cout<<"odd"<<endl;
    }
}
