#include<iostream>
using namespace std;
int main()
{
    int x=0,i,n;
   while(1) {


    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            x++;
    }
    if(x==0)
        cout<<"prime number"<<endl;
    else
        cout<<"not prime number"<<endl;
    }
}
