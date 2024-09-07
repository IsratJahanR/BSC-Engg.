#include<iostream>
using namespace std;
class Box
{
   int l;
   int w;
   public:
   Box(int i,int j)
   {
       l=i;
       w=j;
       count ++;

   }
   public:
       int Area()
       {
           return l*w;
       }
       static int count;
};
int Box::count=0;
int main()
{
   Box b1(3,4);
   cout<<Box::count<<endl;
   int p=b1.Area();
   cout<<p<<endl;
   Box b2(5,7);
   cout<<Box::count<<endl;


}

