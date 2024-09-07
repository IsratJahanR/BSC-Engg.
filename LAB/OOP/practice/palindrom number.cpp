#include<iostream>
using namespace std;
int main()
{
    int i,x[20000],n,temp=0,rim,p;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>x[i];
    for(i=0;i<n;i++)
    {
        p=x[i];
        while(x[i]>0)
        {
            rim=x[i]%10;
            x[i]=x[i]/10;
            temp=temp*10+rim;
        }
        if(p==temp)
        cout<<"Case "<<i+1<<": Yes"<<endl;
        else
        cout<<"Case "<<i+1<<": No"<<endl;
        temp=0;

    }
}
