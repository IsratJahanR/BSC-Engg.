#include <bits/stdc++.h>

using namespace std;

class Adder
{
    int num;
public:
    Adder() : num(0) {};
    Adder(int num) : num(num) {};

    void operator += (int a)
    {
        num += a;
    }

    bool operator ==(Adder &obj)
    {
        if(num == obj.num) return true;
        return false;
    }
    friend ostream& operator <<(ostream &output, Adder obj)
    {
        output<<obj.num;
        return output;
    }
    friend istream& operator >>(istream &input, Adder obj)
    {
        input>>obj.num;
        return input;
    }
    Adder operator +(Adder obj)
    {
        return Adder(num + obj.num);
    }
    void print()
    {
        cout<<num<<endl;
    }
};

int main()
{
    Adder sum1(31);
    Adder sum2(31);

    sum1 += 1;

    cout<<"Default Value of sum1: "<<sum1<<endl;

    cout<<"Enter New Value of sum2: ";
    cin>>sum2;
    cout<<"Summation of sum1 and sum2: "<<sum1 + sum2<<endl;
    return 0;
}
