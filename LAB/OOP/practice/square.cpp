#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c,d;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cin>>c>>d;
        if(a>b) swap(a,b);
        if(c>d) swap(c,d);
        if(a+c==b && a+c==d) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
