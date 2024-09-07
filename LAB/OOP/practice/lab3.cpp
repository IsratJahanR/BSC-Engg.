#include<iostream>
using namespace std;
class A
{
public:
    double a,b,c;
    double volume();

};
   double A :: volume()
    {
        return a*b*c;
    }
int main()
{
   A obj;
   obj.a =20.0;
   obj.b =20.0;
   obj.c =20.0;
   double res = obj.volume();
   cout<<res<<endl;
}
