


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

double getEA(double pre,double curr)
{
    double ans =abs((1-pre/curr))*100.0;
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
   double del=0.01;
   xt=0.567;
   ea = 100.0;

   cout<<"Iter.     Xi         ea%        et% "<<endl;
   cout<<"-------------------------------------------------------"<<endl;

   vector<double>x;
   x.push_back(xi);
   int it=0;
  // cout<<x[it]<<endl;
   while(ea>es)
   {

      double  xi =x[it]-(del*x[it]*getfun(x[it]))/(getfun(x[it]+del*x[it])-getfun(x[it]));
      cout<<getfun(x[it]+del*x[it])-getfun(x[it])<<endl;
      x.push_back(xi);

      it++;
      ea=getEA(x[it-1],x[it]);
      et=getET(x[it],xt);
      cout<<" "<<it<<"       "<<x[it]<<"        "<<" "<<"        "<<et<<endl;

   }

}


