#include<iostream>
using namespace std;
class palindrom
{
    public:
    int x,rim,sum=0;
    int reverse(int x)
    {
        while(x>0)
        {
            rim=x%10;
            sum=sum*10+rim;
            x=x/10;
        }
        return sum;
    }
};
int main()
{
int d,rev;
palindrom object;
cout<<"Put number:";
cin>>d;
rev=object.reverse(d);
if(rev==d)
    cout<<"PALINDROM"<<endl;
else
    cout<<"NOT PALINDROM"<<endl;
return 0;
}
