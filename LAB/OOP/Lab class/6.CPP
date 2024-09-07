#include<iostream>
using namespace std;
class Sum
{
    public:
    int x,y,z;
    int sum(int x,int y)
       {
           cout<<"sum= "<<x+y<<endl;
       }
    int sum(int x,int y,int z)
       {
           cout<<"sum= "<<x+y+z<<endl;
       }

};
int main()
{
    Sum obj;
    obj.sum(10,5);
    obj.sum(20,15,25);
}
