///selection sort
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[]={6,4,5,1,3,2};
    int i,j,m;
    for(int i=0;i<5;i++)
    {
        m=i;
        for(j=i+1;j<6;j++)
        {
         if(a[j]<a[m])m=j;

        }
        if (m!=i)swap(a[i],a[m]);

    }
    for(int i=0;i<6;i++)cout<<a[i]<<" ";
    cout<<endl;


}
