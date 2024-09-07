#include<iostream>
#include<algorithm>
using namespace std;
const int Size=7;
int main()
{
    int a[Size]={1,2,3,6,5,4,7};
    sort(a,a+Size);
    cout<<"sorted Array look like this"<<endl;
    for(int i=0;i!=Size;i++)
        cout<<a[i]<<" ";
    return 0;
}
