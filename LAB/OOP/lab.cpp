#include<iostream>
using namespace std;
class Reverse
{
    public:
    int x,rimender,sum=0;
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
            sum=sum*10+rimender;
            x=x/10;
        }
    }
    showresult()
    {
        cout<<"Result is:"<<sum;
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

