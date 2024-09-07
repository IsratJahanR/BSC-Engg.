#include<iostream>
using namespace std;
class A
{
    public:
    int x;
    static int y;
    A()
    {
      y++;
    }
};
int A::y=01;
int main()
{
  cout<<"Result is:"<<A::y<<endl;
}
