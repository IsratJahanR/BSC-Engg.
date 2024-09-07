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
   int n,s1=0,s2=0;
   cin>>n;
   int a[n][n];
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
     {
         cin>>a[i][j];
         if(i==j)s1+=a[i][j];
         if((i+j+1)==n)s2+=a[i][j];
     }
   }
   //cout<<s1<<" "<<s2<<endl;
   int a1=abs(s1-s2);
   cout<<a1<<endl;

}

