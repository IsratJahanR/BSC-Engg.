#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[n];
    vector<int> x;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        for(int j=a[i];j<=b[i];j++)x.pb(j);
    }
    int p=x.size();
    sort(x.begin(),x.end());
    //cout<<x.size()<<endl;
    //for(int i=0;i<x.size();i++)cout<<x[i]<<" ";

    vector<int> y;
    int cc=0;
    for(int i=1;i<=m;i++)
    {
        int c=0;
        for(int j=0;j<p;j++)
        {
            if(i==x[j])break;
            else c++;
        }
        if(c==p){cc++; y.pb(i);}
    }
    cout<<cc<<endl;
    for(int i=0;i<cc;i++)cout<<y[i]<<" ";

}
