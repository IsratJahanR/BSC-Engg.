#include<bits/stdc++.h>
using namespace std;

double getfun(double x)
{
  double ans=sqrt(2*(4-(x*x)/4));
  return ans;
}
void simpson_1_3()
{
   double a=0,b=4;
   double sum=getfun(a)+getfun(b);
   double n=4;
   double h= (b-a)/n;

   double strt=h;
   int it=1;
   while(strt<b)
   {
       if(it%2)sum+=4*getfun(strt);
       else sum+=2*getfun(strt);
       strt+=h;
       it++;
   }


   double ans =h*(sum/3);
   cout<<ans*4<<endl;
}


int main()
{

simpson_1_3();


}
