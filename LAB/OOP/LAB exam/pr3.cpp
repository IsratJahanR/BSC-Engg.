#include<iostream>
using namespace std;
class Lab
{
    public:
    int hr;
    int mnt;
    Lab()
    {
        hr =0;
        mnt =0;
    }
    Lab(int a, int b)
    {
        hr =a;
        mnt =b;
    }
    void set()
    {
        cin>>hr>>mnt;
    }
    void operator-()
    {
        --hr;
        --mnt;
    }
    void print()
    {
        cout<<hr<<" "<<mnt<<endl;

    }
};
int main()
{
    Lab obj;
    obj.set();
    -obj;
    obj.print();

}
