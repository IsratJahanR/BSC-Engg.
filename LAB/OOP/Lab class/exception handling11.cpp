#include<iostream>
using namespace std;
class excp{
    public:
double function(int p,int q)
{
    try
    {
        double result;
        if(q==0)
            throw q;
        cout<<"result = "<<(double)p/q<<endl;

    }
    catch(...)
    {
        cout<<"exception caught"<<endl;

    }


}
};

int main()
{
  excp obj1,obj2;
  obj1.function(1,2);
  obj2.function(2,0);
  return 0;
}
