#include<iostream>
using namespace std;
class student
{
public:
    string name;
    int id;
    input1()
    {
        cin>>name>>id;
    }
};
class info
{
public:
    int atten;
    int mid;
    int per;
    int Final;
    int total;
    input2()
    {
        cin>>atten>>mid>>per>>Final;
        total=atten+mid+per+Final;
        cout<<"Total="<<total<<endl;
    }
};
class output:public student ,public info
{
public:


    display()
    {
        input1();
        input2();
        if(total>=80)
            cout<<"CGPA 4"<<endl;
        if(total>=75&&total<80)
            cout<<"CGPA 3.75"<<endl;
        if(total>=70&&total<75)
            cout<<"CGPA 3.50"<<endl;
        if(total>=65&&total<70)
            cout<<"CGPA 3.25"<<endl;
        if(total>=60&&total<65)
            cout<<"CGPA 3.00"<<endl;
        if(total>=55&&total<60)
            cout<<"CGPA 2.75"<<endl;
        if(total>=50&&total<55)
            cout<<"CGPA 2.50"<<endl;
        if(total>=45&&total<50)
            cout<<"CGPA 2.25"<<endl;
        if(total>=40&&total<45)
            cout<<"CGPA 2.00"<<endl;
        if(total<40)
            cout<<"Fail"<<cout;
    }

};
int main()
{
    output obj;
    obj.display();
}
