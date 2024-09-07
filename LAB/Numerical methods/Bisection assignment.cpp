#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
double getEa(int x)
{

}
void inputFunction()
{
    cout<<"f(x) = x^3 + 2x^2 - x + 8"<<endl;
}
double getfun(double x)
{
  double ans = x*x*x+2*x*x-x+8;
  return ans;
}
double getEA(double xl,double xu)
{
    double ans =((xu-xl)/(xu+xl))*100.0;
    //cout<<ans<<endl;
    return abs(ans);
}

int main()
{
   inputFunction();
   double xl=-100;
   double xu=100;
   double xr,es=0.5,ea=100,et=0.0;
   ea = getEA(xl,xu);


   double fxl,fxu,fxr;

   fxl=getfun(xl);
   fxu=getfun(xu);

   //cout<<fxl<<" "<<fxu<<endl;
   int it=1;
   cout<<"Iter.        Xr"<<endl;
   cout<<"---------------"<<endl;

   cout<<fixed<<setprecision(6);
   while(it<=100)
   {
       xr =(xl+xu)/2.0;
      // ea = getEA(xl,xu);
       fxr=getfun(xr);
      cout<<it<<"       "<<xr<<endl;


      if(fxl*fxr<0)
      {
          xu=xr;
          fxu=fxr;
      }
      else
      {
          xl=xr;
          fxl=fxr;
      }

      it++;

   }

   cout<<"So, the root is : "<<xr<<" after 100 iteration"<<endl;

}
