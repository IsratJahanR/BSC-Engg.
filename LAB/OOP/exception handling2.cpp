#include<iostream>
using namespace std;
int main()
{
    try
    {
        int a;
        int b;
        cout<<"1st number:";
        cin>>a;
        cout<<"2nd number:";
        cin>>b;
        if(b==0)
        {
            throw -1;//throw b;
        }
            double result =(double)a/b;
            cout<<result<<endl;
    }
        catch(int x){
        cout<<"divided by zero is not possible";
        cout<<"try again";
    }
}
