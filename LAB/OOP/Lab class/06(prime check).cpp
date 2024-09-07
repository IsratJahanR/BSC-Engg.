#include<iostream>
using namespace std;
class primenum
{
    public:
    int N,c=0,i;
    getnum()
    {
        cout<<"Enter a positive integer number:";
        cin>>N;
    }
        void display()
        {
            for(i=2;i<N;i++)
            {
                if(N%i==0)
                {
                c++;
                break;
                }
            }
            if(c==0)
               cout<<"Prime number";
            else
                cout<<"Not Prime number";

        }

};
int main()
{
    primenum P;
    P.getnum();
    P.display();

   return 0;
}
