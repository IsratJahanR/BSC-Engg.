#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int x=a-b;
    try
    {
        if(x!=0)
        {
            cout<<"Result is"<<a/x<<endl;
        }
        else
        {
            throw(x);
        }
    }
    catch(int i)
    {
    cout<<"This is exception case:"<<endl;
    }
 return 0;
}
