
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int partition(int a[],int low,int high)
{
    //if(low>=high)return ;
    int i,j,temp,pivot;
    pivot=a[high];
    for(i=low,j=low;j<high;j++)
    {
        if(a[j]<=pivot)
        {

            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            i++;
        }
    }
    temp=a[high];
    a[high]=a[i];
    a[i]=temp;
    return i;
    //partition(a,low,i-1);
    //partition(a,i+1,high);

}
void quick_sort(int a[],int low,int high )
{
    int i;
    if(low<high)
    {
        i=partition(a,low,high);
        quick_sort(a,low,i-1);
        quick_sort(a,i+1,high);
    }

}
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   cout<<"Before sorting:\n";
   for(int i=0;i<n;i++)cout<<a[i]<<" ";
   cout<<endl;
   quick_sort(a,0,n-1);
   cout<<"After sorting:\n";
   for(int i=0;i<n;i++)cout<<a[i]<<" ";
   cout<<endl;

}
