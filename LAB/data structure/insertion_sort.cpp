   /// SUBMITTED BY: Israt Jahan Reshma
   /// Dept. CSE(SHIICT)
   ///ID: 18ICTCSE041
   ///insertion_ sort

#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[],int n)
{
    int i,j,temp;
    for(int i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<"Before Sorting : "<<endl;
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
    insertion_sort(a,n);
    cout<<"After Sorting : "<<endl;
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;


}
