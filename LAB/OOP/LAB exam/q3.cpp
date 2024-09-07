#include<iostream>
using namespace std;

class Abc
{
public:
    int hour,minute;
    Abc(){hour=0;minute=0;}
    Abc(int x,int y){hour=x;minute=y;}
    void set(){
        cout<<"enter hour and minute: ";
        cin>>hour>>minute;
    }
    void operator -(){
        --hour;--minute;

    }
};
int main()
{
    Abc ob1,ob2(1,1),ob3;
    -ob2;
    //ob1.set();
    //ob3=ob1-ob2;
    cout<<"hour="<<ob2.hour<<endl<<"minute="<<ob2.minute;
}
