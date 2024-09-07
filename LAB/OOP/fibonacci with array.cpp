#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int a[30],n,i;
    cout<<"enter how many numbers:";
    cin>>n;
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<n;i++)
    {
       cout<<a[i]<<endl;
    }
    return 0;
}
