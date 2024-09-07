#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,x;
    cin>>x;
    int s=0,s1=0,c=0;
    int A[x];
    for(int i=0;i<x;i++)
    {
        cin>>A[i];
        s+=A[i];
    }
    s=s/2;
    sort(A,A+x);

    for(int j=x-1;j>=0;j++)
    {
        s1=A[j];
        c++;
        if(s<s1)break;
    }
    cout<<c<<endl;
    return 0;

}

