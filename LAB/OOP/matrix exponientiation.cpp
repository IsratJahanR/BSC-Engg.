#include<bits/stdc++.h>
#define N 101
//#define
int ar[N][N],I[N][N];
#define floop(i,n) for(int i=1;i<=n;i++)
using namespace std;
void mul(int A[][N],int B[][N],int dim)
{
    int res[dim+1][dim+1];
    floop(i,dim)
    {
        floop(j,dim)
        {
            res[i][j]=0;
            floop(k,dim)res[i][j]+=A[i][k]*B[k][j];
        }
    }
    floop(i,dim)
    {
        floop(j,dim)A[i][j]=res[i][j];
    }
}

void power(int A[][N],int dim,int n)
{
    //int i,j;
  floop(i,n)
  {
      floop(j,n)
      {
          if(i==j)I[i][j]=1;
          else I[i][j]=0;
      }
  }
 // floop(i,n)mul(I,A,dim); ///Naive approach
 while(n)
 {
     if(n%2)mul(I,A,dim),n--; ///Binary exponientiation
     else mul(A,A,dim),n/=2;
 }
  floop(i,n)
  {
      floop(j,n)A[i][j]=I[i][j];
  }
}
void prntMat(int A[][N],int dim)
{
    floop(i,dim)
         {
         floop(j,dim)cout<<A[i][j]<<" ";
         cout<<endl;
         }
}
int main()
{
  int t,dim,n;
  cin>>t;
  while(t--)
  {
      cin>>dim>>n;
      floop(i,dim)
      {
          floop(j,dim)cin>>ar[i][j];
      }
      power(ar,dim,n);
      prntMat(ar,dim);

  }
}
