#include<iostream>
using namespace std;
class add
{
   public:
   int result;
   void sum(int a,int b,int c,int d)
       {
           cout<<"c = "<<a+b<<"+"<<c+d<<"j"<<endl;
       }

};
int main()
{
     add F;
     F.sum(2,3,3,5);
}

