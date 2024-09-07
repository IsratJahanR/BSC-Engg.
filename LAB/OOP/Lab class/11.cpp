#include<iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout<<"this is vehicle class"<<endl;
    }
};
class bus:public vehicle
{
public:
    bus(){
cout<<"this is vehicle class"<<endl;
    }
};
class car:public vehicle
{

};
int main()
{
    car v1;
    return 0;
}

