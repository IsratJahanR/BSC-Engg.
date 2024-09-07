#include<bits/stdc++.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include<iomanip>
#define pi            3.1416
#define pb            push_back
#define mp            make_pair
#define loop(i,n)     for(int i=0;i<n;i++)
#define END           return 0;
#define nl            endl
#define F             first
#define S             secend
#define ll            long long
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*b)/gcd(a,b)
using namespace std;
int main()
{
    ll n;
    double s1=0.0,s2=0.0,s3=0.0;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0)s1++;
        else if(a[i]<0)s2++;
        else s3++;

    }
    //cout<<showpoint();
    cout<<fixed<<setprecision(6);
    s1=s1/n;
    s2=s2/n;
    s3=s3/n;
    cout<<s1<<nl<<s2<<nl<<s3<<nl;

}
