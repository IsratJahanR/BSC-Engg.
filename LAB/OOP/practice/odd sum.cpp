#include<iostream>
using namespace std;
int main()
{
    int i,n,a[100],b[100],s=0,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n;i++)
    {
         if(a[i]%2!=0){
        for(j=a[i];j<=b[i];j=j+2){

                   s=s+j;

        }
         }
         else{
         for(j=a[i]+1;j<=b[i];j=j+2){

                   s=s+j;

        }
         }

        cout<<"Case "<<i+1<<": "<<s<<endl;
        s=0;
    }
}
