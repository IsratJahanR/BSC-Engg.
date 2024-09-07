#include<iostream>
using namespace std;
int main()
{
    int i,n,x[50],y[50];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<y[i]-x[i]<<endl;
    }
}
