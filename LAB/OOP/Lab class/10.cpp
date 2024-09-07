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
class fowrheeler
{

};
class car:public vehicle,public fowrheeler
{

};
int main()
{
    car v1;
    return 0;
}
