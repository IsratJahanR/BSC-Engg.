#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,n,fact;
    while(scanf("%d",&n)!=EOF)
    {
        fact=1;
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<fact<<endl;

    }
}
