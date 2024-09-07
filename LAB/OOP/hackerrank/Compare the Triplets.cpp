#include<bits/stdc++.h>
#include<time.h>
#include<math.h>
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
   ll a[3],b[3],s1=0,s2=0;
   for(int i=0;i<3;i++)cin>>a[i];
   for(int i=0;i<3;i++)cin>>b[i];
   for(int i=0;i<3;i++)
   {
       if(a[i]>b[i])s1++;
       if(b[i]>a[i])s2++;
   }
   cout<<s1<<" "<<s2<<nl;


}

