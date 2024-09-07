#include<bits/stdc++.h>
#define SIZE 86028122
using namespace std;
bool marked[SIZE];
vector <int>primes;
void seive()
{
    for(int i=3;i*i<SIZE;i+=2)
        if(!marked[i])
        for(int j=i*i;j<SIZE;j+=2*i)
            marked[j]=true;
        primes.push_back(2);
        for(int i=3;i<SIZE;i+=2)
            if(marked[i]) primes.push_back(i);

}
int main()
{
    seive();
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        cout<<primes[k-1]<<endl;
    }
    return 0;
}

