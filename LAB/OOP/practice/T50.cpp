#include<iostream>
using namespace std;
class A
{
    int id;
public:
    void getid()
    {
        cin>>id;
        cout<<id<<endl;
    }
};
class B
{
    int mark;
public:
    void getmark()
    {
        cin>>mark;
        cout<<mark<<endl;
    }
};
class C: private A,private B
{
public:
    void print()
    {
        getid();
        getmark();
    }
};
int main(){
    C obj;
    obj.print();
    return 0;

}
