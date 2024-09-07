#include<bits/stdc++.h>
using namespace std;

double getfun(double x)
{
  //double ans = 0.2+25*x-200*x*x+675*x*x*x-900*x*x*x*x+400*x*x*x*x*x;
   double ans =sqrt(25-(x-4)*(x-4));
  return ans;
}

int main()
{

   double a=0,b=0.8;
   b=5;
   double sum=getfun(a)+getfun(b);
   double n=2;
   double h= (b-a)/n;

   double strt=h;
   while(strt<b)
   {
       sum+=2*getfun(strt);
       strt+=h;
   }


   double ans =h*(sum/2);
   cout<<ans*4<<endl;


}
