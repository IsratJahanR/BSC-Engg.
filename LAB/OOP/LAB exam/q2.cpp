#include<iostream>
using namespace std;

class A
{
public:
    int x;

};
class B
{
public:
    int y;
};
class C:public A,public B
{
public:
    double div;
    void set(){
        try{
            cout<<"enter two integer varible: ";
            cin>>x>>y;
            if(y==0){
                throw -1;
            }
            else{
                div=(double)x/y;
                get();
            }
        }
        catch(...){
            cout<<"your input is not correct!";
        }
    }
    void get()
    {
        cout<<"div is : "<<div;
    }
};
int main()
{
    C ob;
    ob.set();
}
