#include<bits/stdc++.h>
#define ll long long
#include<iomanip>
using namespace std;
int main()
{
  ll n,l,p,ans;
  cin>>n>>l;
  cout<<showpoint();
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  sort(a,a+n);
  ll m=0,q,r;
  double v;
  if(n==1)
    {
        if(l-a[0]>a[0])ans=l-a[0];
        else ans=a[0];
        v=ans/1.0;
    }
  else
  {
   for(int i=0;i<n-1;i++)
  {
     if(a[i+1]-a[i]>m)m=a[i+1]-a[i];
  }
  q=2*(a[0]);
  r=2*(l-a[n-1]);

  m=max(m,q);
  ans=max(m,r);
  v = ans/2.0;
  }

  cout<<v<<endl;


}
