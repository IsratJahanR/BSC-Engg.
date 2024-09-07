#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;
int main()
{
 int T,i;
 double r,result,pi=2*acos(0.0);
 cin>>T;

 for(i=1;i<=T;i++)
 {
   cin>>r;
   cout<<showpoint;
   cout<<fixed;
   cout<<setprecision(2);
   result=4*r*r-pi*r*r;
   cout<<"Case "<<i<<": "<<result<<endl;
 }
}
