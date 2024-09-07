#include<iostream>
using namespace std;
void func()
{
    try{
       int a=1;
       int b=0;
       if(b==0)
       {
           throw b;
       }
     int c=a/b;
       cout<<c<<endl;
    }
    catch(...)
    {
        cout<<"exception handling"<<endl;
    }
}
int main()
{
   func();
   return 0;
}
