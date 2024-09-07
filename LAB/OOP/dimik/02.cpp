#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
  char num[102];
  while(T--){
  cin>>num;
  int n;
  n=num[strlen(num)-1]-'0';
  //cout<<n<<endl;
  if(n%2==0)cout<<"even"<<endl;
  else cout<<"odd"<<endl;
  }

}

