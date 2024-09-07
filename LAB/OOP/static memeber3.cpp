#include<iostream>
using namespace std;
class ABC
{
    public:
        static int a;
        int b=0;
        void fun()
        {
            cout<<++a<<" "<<++b<<endl;
        }
        };
int ABC::a=0;
int main()
{
  ABC ob1,ob2;
  ob1.fun();
  ob2.fun();
  ob2.fun();
  return 0;
}

