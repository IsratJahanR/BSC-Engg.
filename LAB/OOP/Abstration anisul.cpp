#include<iostream>
using namespace std;
class mobileuser
{
public:
    void call()
    {
        cout<<"Hello"<<endl;
    }
    virtual void sendmsg()=0;
};
class Rahim:public mobileuser
{
    public:
    void sendmsg()
    {
      cout<<"Rahim"<<endl;
    }

};
class Karim:public mobileuser
{
    public:
    void sendmsg()
    {
      cout<<"Karim"<<endl;
    }

};
int main()
{
//by using pointer

   Karim K;
   Rahim R;
   mobileuser *M;
   M=&K;
   M->call();
   M->sendmsg();
   M=&R;
   M->sendmsg();

/*by using reference
   Karim K;
   Rahim R;
   mobileuser &M=K;
   M.sendmsg();
   mobileuser &M=R;
   M.sendmsg();*/
/*here we cannot use reference because we know that
 a reference can refer only one objecte during its lifetime*/

   return 0;
}
