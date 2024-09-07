   /// SUBMITTED BY: Israt Jahan Reshma
   /// Dept. CSE(SHIICT)
   ///ID: 18ICTCSE041
   ///selection _ sort

#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[],int n)
{
    int i,j,temp,p;
    for(int i=0;i<n-1;i++)
    {
        temp=i;
        for(j=i+1;j<n;j++)
        {
         if(a[j]<a[temp])temp=j;

        }
        if (temp!=i)
        {
        ///with swap()
          //swap(a[i],a[temp]);
        ///Without swap()
         p=a[temp];
         a[temp]=a[i];
         a[i]=p;
        }
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
    selection_sort(a,n);
    cout<<"After Sorting : "<<endl;
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;


}
