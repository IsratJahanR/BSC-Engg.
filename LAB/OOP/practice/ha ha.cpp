#include<bits/stdc++.h>
#define ll long long int
#define mm 1073741824
#define M  10000007
using namespace std;
//vector<int >v;
int v[M];
//vector<int > prime;
/*void sieve()
{
    int i,sq,j;
    sq=sqrt(N);
    a[1]=1;
    for(i=4; i<=N; i+=2)
        a[i]=1;
    a[0]=1;
    for(i=3; i<=sq; i++)
    {
        if(!a[i])
        {
            for(j=i*2; j<=N; j+=i)
                a[j]=1;
        }
    }
}*/
void div()
{
    ////v[0]=0;
    //v.push_back(0);
    ll s;
    for(ll i=1;i<=M;i++)
    {
        s=0;
        for(ll j=1;j*j<=i;j++){
        if(i%j==0)
        {
            if(j*j==i)s++;
            else s+=2;
        }
        }
        v[i]=s;
        //v.push_back(s);
    }
    //return s;
}
int main()
{
    div();
    //int t; cin>>t; while(t--){
    //vector<int> v;
    ll a,b,sum=0,n,m,c;
    cin>>a>>b>>c;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                //div();
                m=i*j*k;
                sum+=v[m];
                //v.push_back(m);
            }
        }
    }
   /* for(ll i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }*/
    cout<<sum%mm<<endl;

}




