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
   static int count;
       int Area()
       {
           return l*w;
       }
       static int getcount(){
       return count;
       }
};

int Box::count=0;
int maint()
{
   Box b1(3,4);
   cout<<Box::getcount()<<endl;
   int p=b1.Area();
   cout<<p<<endl;
   Box b2(5,7);
   cout<<Box::count<<endl;


}


