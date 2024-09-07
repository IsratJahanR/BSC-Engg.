#include<iostream>
using namespace std;
class Reverse
{
    public:
    int x,rimender,rev_num=0;
    putinput()
    {
      cout<<"Put number:";
      cin>>x;
    }
    calculate()
    {
        while(x>0)
        {
            rimender=x%10;
            rev_num=rev_num*10+rimender;
            x=x/10;
        }
    }
    showresult()
    {
        cout<<"Result is:"<<rev_num;
    }
};
int main()
{
Reverse result;
result.putinput();
result.calculate();
result.showresult();
return 0;
}

