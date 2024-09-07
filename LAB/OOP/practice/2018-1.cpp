#include<iostream>
using namespace std;
class A
{
    public:
    int a,b,c;
    void setValue(int x, int y, int z);

   int Volume()
   {
       return a*b*c;
   }
};
void A :: setValue(int x, int y, int z)
    {
        a=x;
        b=y;
        c=z;
    }
int main()
{
    A obj;
    obj.setValue(2,3,4);
    int V = obj.Volume();
    cout<<V<<endl;
}

