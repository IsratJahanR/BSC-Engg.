#include<iostream>
using namespace std;
class time
{
    int hours;
    int minute;
public:
    void gettime(int h,int m)
    {
        hours=h;
        minute=m;
    }
    void puttime()
    {
        cout<<hours<<" hours and "<<minute<<" minute "<<endl;
    }
    void sum(time,time);
};
void time::sum(time t1,time t2)
{
  minute = t1.minute+t2.minute;
  hours = minute/60;
  minute = minute%60;
  hours = hours+t1.hours+t2.hours;
}
int main()
{
    time T1,T2,T3;
    T1.gettime(2,30);
    T2.gettime(3,23);
    T3.sum(T1,T2);
    T1.puttime();
    T2.puttime();
    T3.puttime();
}
