#include<iostream>
using namespace std;
int main(){
    int x,rim,sum=0,d;
    cin>>x;
    cout<<x;
        while(x>0)
        {
            rim=x%10;
            sum=sum*10+rim;
            x=x/10;
        }

cout<<sum<<endl;
return 0;
}

