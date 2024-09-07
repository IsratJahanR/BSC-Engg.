#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1000;i>0;i=i-5)
    {
        cout<<i<<"\t"<<i-1<<"\t"<<i-2<<"\t"<<i-3<<"\t"<<i-4<<"\t"<<endl;
    }
    return 0;
}
