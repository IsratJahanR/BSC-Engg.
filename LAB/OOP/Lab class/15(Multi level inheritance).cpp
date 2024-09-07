#include<iostream>
using namespace std;
class std_inf
{
    public:
    int ID;
    string name;
    void display1()
    {
        cout<<"Name:";
        cin>>name;
        cout<<"ID:";
        cin>>ID;
    }

};
class total:public std_inf
{
    public:
    int atten;
    int mid;
    int final;
    int per;
    int total;
     display2()
    {
        display1();
        cin>>atten>>mid>>final>>per;
        total= atten+mid+final+per;
        cout<<"TOTAL:"<<total<<endl;
    }
};
class grade:public total
{
public:
        display3(){
            display2();
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
    grade s1;
    s1.display3();
}
