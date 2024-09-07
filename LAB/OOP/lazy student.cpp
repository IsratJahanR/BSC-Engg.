#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int T,X,Y,i,result;
    cin>>T;
    for(i=1;i<=T;i++)
 {
   cin>>X>>Y;
   if(X==Y)
   result=4*Y+19;
   else
    result = abs(X-Y)*4+X*4+19;
   cout<<"Case "<<i<<": "<<result<<endl;
 }
}
