#include<bits/stdc++.h>
using namespace std;
void inputFunction()
{
    cout<<"667.38/x(1-e^(-0.146843*x))-40"<<endl;
}
double getfun(double x)
{
  double ans = (667.38/x)*(1-exp(-0.146843*x))-40;
  return ans;
}
double getEA(double xl,double xu)
{
    double ans =((xu-xl)/(xu+xl))*100.0;
    //cout<<ans<<endl;
    return ans;
}
double getET()
{

}
int main()
{
   inputFunction();
   double xl=12,xu=16,xr,es=0.5,ea=100,et=0.0;
   //cin>>xl>>xu;
   //cin>>es;
   ea = getEA(xl,xu);


   double fxl,fxu,fxr;

   fxl=getfun(xl);
   fxu=getfun(xu);


   int it=1;
   cout<<"Iter.     Xl       Xu        Xr         ea%        et% "<<endl;
   cout<<"-------------------------------------------------------"<<endl;

   //cout<<exp(1)<<endl;
   while(ea>es)
   {
        xr =(xl+xu)/2.0;
        ea = getEA(xl,xu);
      cout<<" "<<it<<"       "<<xl<<"        "<<xu<<"        "<<xr<<"        "<<ea<<"        "<<et<<endl;

      fxr=getfun(xr);
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

}
