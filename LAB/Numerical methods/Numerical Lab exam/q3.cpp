#include<bits/stdc++.h>
using namespace std;

double getfun(double x)
{
  double ans = sqrt(36-(x-4)*(x-4))+4;
  return ans;
}

double getEA(double pre,double curr)
{
    double ans =abs((1-pre/curr))*100.0;
    //cout<<ans<<endl;
    return ans;
}

int main()
{
   double xi1=0,xi2,es=0.05,ea=100,et=0.0,xt;

   xt=0.567;
   ea = 100.0;

   xi1=-2;
   xi2=-1;
   cout<<"Iter.     Xi              ea%  "<<endl;
   cout<<"-------------------------------"<<endl;

   vector<double>x;
   x.push_back(xi1);
   x.push_back(xi2);
   int it=1;
   cout<<fixed<<setprecision(6)<<endl;
   while(ea>et)
   {

      double  xi =x[it]-(getfun(x[it])*(x[it-1]-x[it]))/(getfun(x[it-1])-getfun(x[it]));
      x.push_back(xi);
      ea=getEA(x[it],x[it+1]);
      cout<<" "<<it<<"       "<<x[it+1]<<"         "<<ea<<endl;

     it++;

   }

}


























































