
#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int left,int mid,int right)
{
    int n1,n2;
    n1=mid-left+1;
    n2=right-mid;
    int l[n1],r[n2];
    for(int i=0;i<n1;i++)l[i]=a[left+i];
    for(int i=0;i<n2;i++)r[i]=a[mid+1+i];
    int i=0,j=0,k=left;
    while(i<n1 && j<n2)
    {
       if(l[i]<=r[j]) a[k]=l[i],i++;
       else a[k]=r[j],j++;
       k++;
    }
    while(i<n1)
    {
        a[k]=l[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=r[j];
        j++;
        k++;
    }
    //if(i<n1-1)a[k]=l[i],i++,k++;
    //if(j<n2-1)a[k]=r[j],j++,k++;
}
void merge_sort(int a[],int left,int right)
{
    if(left>=right)return ;
    int mid = (left+right)/2;
    merge_sort(a,left,mid);
    merge_sort(a,mid+1,right);
    merge(a,left,mid,right);
}
int main()
{
    int a[]={3,5,1,2,7,8,9};
    merge_sort(a,0,6);
    for(int i=0;i<7;i++)cout<<a[i]<<" ";

}
