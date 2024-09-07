#include<iostream>
using namespace std;
class Complex
{
public:
    int real,img;

Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    Complex operator+(Complex const &obj){
    Complex res;
    res.real=real+obj.real;
    res.img=img+obj.img;
    return res;
    }
    void print()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }

};
int main()
{
    Complex A(2,3);
    Complex B(3,4);
    Complex C=A+B;
    C.print();
    return 0;
}
