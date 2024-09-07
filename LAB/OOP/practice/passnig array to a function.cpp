#include<iostream>
using namespace std;
void fun(int arr[],int size)
{
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"inside fun : "<<n<<endl;
}
int main()
{
    int N=7;
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"inside main : "<<n<<endl;
    fun(arr,N);
}
