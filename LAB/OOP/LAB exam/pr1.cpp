#include<iostream>
using namespace std;
class Lab
{
public:
    int a;
    int b;
    Lab()
    {
        a = 2;
        b = 3;
    }
    void scan()
    {
        cout<<"Value of a : ";
        cin>>a;
        cout<<endl;
        cout<<"Value of b : ";
        cin>>b;
        cout<<endl;
    }
    int operation()
    {
        return a*b;
    }

};
int main()
{
    Lab obj;
    obj.scan(); ///Get input from user:
    int result = obj.operation();
    cout<<"Multiplication result of user input: "<<result<<endl;
    cout<<endl;

    Lab obj2;
    int result2 = obj2.operation();
    cout<<"Multiplication result is default constructor: "<<result2<<endl;

    return 0;
}

