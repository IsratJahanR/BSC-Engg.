#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int a[], int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])swap(a[j],a[j+1]);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    bubble_sort(A,n);
    for(int i=0;i<n;i++)cout<<A[i]<<" ";
    cout<<endl;

}
