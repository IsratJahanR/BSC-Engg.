#include<iostream>
using namespace std;
class Vector
{
private:
    int img1,img2,img3;
public:
    Vector(int a=0,int b=0,int c=0)
    {
        img1=a;
        img2=b;
        img3=c;
    }
    Vector operator+(Vector const &obj){
    Vector res;
    res.img1=img1+obj.img1;
    res.img2=img2+obj.img2;
    res.img3=img3+obj.img3;
    return res;
    }
    void print()
    {


        if(img2<0&&img3<0)
        cout<<img1<<"i"<<img2<<"j"<<img3<<"k"<<endl;
        if(img2>=0&&img3<0)
        cout<<img1<<"i+"<<img2<<"j"<<img3<<"k"<<endl;
        if(img2>=0&&img3>=0)
        cout<<img1<<"i+"<<img2<<"j+"<<img3<<"k"<<endl;
        if(img2<0&&img3>=0)
        cout<<img1<<"i"<<img2<<"j+"<<img3<<"k"<<endl;

    }

};
int main()
{
    Vector A(2,3,4);
    Vector B(6,1,-12);
    Vector C=A+B;
    C.print();
    return 0;
}

