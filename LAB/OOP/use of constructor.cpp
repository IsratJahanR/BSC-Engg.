#include<iostream>
using namespace std;
class sum
{
   public:

sum(int a,int b,int c,int d)
       {
           cout<<"Final result="<<a+b<<"+"<<c+d<<"j"<<endl;
       }

};
int main()
{
     sum obj;
     obj.sum(2,3,3,5);
}
