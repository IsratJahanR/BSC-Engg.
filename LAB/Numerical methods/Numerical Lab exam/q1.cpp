
#include<bits/stdc++.h>
using namespace std;

double getfun(double x)
{

  return sqrt(5)/(2*sqrt(x))-1;
}
double getEA(double pre,double curr)
{
    double ans =abs((1-pre/curr))*100.0;
    //cout<<ans<<endl;
    return ans;
}

int main()
{

   double xl=0.001,xu=2,xr=0,es=0.05,ea=100;
   ea = 100.0;


   double fxl,fxu,fxr;

   fxl=getfun(xl);
   fxu=getfun(xu);

   //xr =xu-((fxu*(xl-xu))/(fxl-fxu));
   int it=1;
   cout<<"Iter.          Xl             Xu              Xr              ea%  "<<endl;
   cout<<"-----------------------------------------------------------------------"<<endl;

   cout<<fixed<<setprecision(6)<<endl;
   while(ea>es)
   {

      double  xr1 =xu-((fxu*(xl-xu))/(fxl-fxu));
      ea = getEA(xr,xr1);
      xr=xr1;
      cout<<" "<<it<<"       "<<xl<<"        "<<xu<<"        "<<xr<<"        "<<ea<<endl;




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
