#include<iostream>
using namespace std;
class Lab1
{
public:
    int a;
};

class Lab2
{
public:
    int b;
};
class Lab3 : public Lab1, Lab2
{
public:
    double res;
    void scan()
    {
        cin>>a>>b;
    }

    void div()
    {
        try{
        if(b==0)
        {
            throw "Divition By zero case";
        }
        else
        {
            res = (double)a/b;
            cout<<res<<endl;
        }
        }
        catch(...)
        {
            cout<<"dibisible By Zero is not possible"<<endl;
        }




    }

};
int main()
{
    Lab3 obj;
    obj.scan();
    obj.div();

    return 0;
}


