

#include<bits/stdc++.h>
using namespace std;
void inputFunction()
{
    //cout<<"667.38/x(1-e^(-0.146843*x))-40"<<endl;
}
double getfun(double x)
{
  double ans = exp(-x)-x;
  return ans;
}
double get_dif_fun(double x)
{
  double ans = -exp(-x)-1;
  return ans;
}

double getEA(double pre,double curr)
{
    double ans =abs((1-pre/curr))*100.0;
    //cout<<ans<<endl;
    return ans;
}
double getET(double xi,double xt)
{
   return abs(1-xi/xt)*100.0;
}
int main()
{
   inputFunction();
   double xi=0,es=1.94,ea=100,et=0.0,xt;

   xt=0.567;
   ea = 100.0;

   int it=1;
   cout<<"Iter.     Xi         ea%        et% "<<endl;
   cout<<"-------------------------------------------------------"<<endl;


   while(ea>es)
   {

      double  xi1 =xi-getfun(xi)/get_dif_fun(xi);


      ea=getEA(xi,xi1);
      xi=xi1;
      et=getET(xi,xt);
      cout<<" "<<it<<"       "<<xi<<"        "<<ea<<"        "<<et<<endl;

      it++;

   }

}

