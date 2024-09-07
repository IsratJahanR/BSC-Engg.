#include<iostream>
using namespace std;
class A
{
    double a,b,c;
    public:
    void set(double x, double y, double z)
    {
        a = x;
        b = y;
        c = z;
    }
    double volume()
    {
        return a*b*c;
    }

};

int main()
{
   A obj;
   obj.set(1,2,3);
   double res = obj.volume();
   cout<<res<<endl;
}

