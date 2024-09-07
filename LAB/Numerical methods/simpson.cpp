#include<bits/stdc++.h>
using namespace std;

double getfun(double x)
{
  double ans=pow((4*x-3),3);//0.2+25*x-200*x*x+675*x*x*x-900*x*x*x*x+400*x*x*x*x*x;
  // double ans =0.2+25*x-200*x*x+675*x*x*x-900*x*x*x*x+400*x*x*x*x*x;
  return ans;
}
void simpson_1_3()
{
   double a=0,b=0.8;
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
   cout<<ans<<endl;
}
void simpson_3_8()
{
   double a=0,b=0.8;
   double sum=getfun(a)+getfun(b);
   double n=3;
   double h= (b-a)/n;

   double strt=h;
   int it=1;
   while(strt<b)
   {
       if(it%3)sum+=3*getfun(strt);
       else sum+=2*getfun(strt);
       strt+=h;
       it++;
   }


   double ans =((3*h)/8)*sum;
   cout<<ans<<endl;
}
void fun_1_3_mul()
{
    double a = -3, b = 5, n = 5; // 4.75
    //cin >> a >> b >> n;
    double h = (b-a)/n;
    vector <double> v(100);
    int j = 0;

    for (double i = a; i <= b; i += h)
    {
        v[j++] = getfun(i);
    }

    /*j = 0;
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        //ans += h*((v[j]+v[j+1])/2);
        ans += ((v[j]+v[j+1]*4+v[j+2]));
        j += 2;
    }*/

    double ans = (2*h*(v[0]+4*v[1]+v[2])/6.0);
    //cout<<ans<<endl;
    ans +=3*h*(v[2]+3*(v[3]+v[4])+v[5])/8;
    cout << ans << endl;
}
int main()
{

//simpson_3_8();
fun_1_3_mul();


}
