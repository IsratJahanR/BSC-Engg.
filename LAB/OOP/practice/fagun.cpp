#include <bits/stdc++.h>
using namespace std;


/*#define  gcd(a,b)         __gcd(a,b)
#define  lcm(a,b)         (a*b)/gcd(a,b)
#define  ll               long long
#define  vi               std::vector<int>
#define  pb               push_back
#define  MAX              100007
#define  End              return 0;
#define                   pi acos(-1)*/


int main ()
{
    int n,m;
    cin>>n>>m;
    string s[n],ss[m];
    for(int i=0; i<n; i++)
        cin>>s[i];
    for(int i=0; i<m; i++)
        cin>>ss[i];

    int t,a;
    cin>>t;
    while(t--){
        cin>>a;
        a--;
        cout<<s[a%n]+ss[a%m]<<endl;
    }
}
