#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[]={10,8,3,7,9,4,5,6};
    int n=sizeof(x)/sizeof(x[0]);
    cout<<sizeof(x[0])<<endl;
    sort(x,x+n);
    for(int i=0;i<n;i++)cout<<x[i]<<" ";
}
