#include<iostream>
using namespace std;
void selection_sort(int A[],int n)
{
    int i,j,index_min,temp;
    for(i=0;i<n-1;i++)
    {
        index_min=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[index_min])
                index_min=j;
        }

    if(index_min!=i)
    {
        temp=A[i];
        A[i]=A[index_min];
        A[index_min]=temp;
    }
  }
}
int main()
{
    int A[6]={10,12,13,14,11,15};
    selection_sort(A,6);
    return 0;

}
