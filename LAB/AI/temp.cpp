
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define  ll         long long int
//#define  endl       '\n'
#define  inf        1000000007
#define  N          300005
#define  yes        cout<<"Yes"<<endl
#define  no         cout<<"No"<<endl
#define  fast       ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
vector<ll>ans;
map<vector<ll>,ll>vis;
map<vector<ll>,ll>lvl;

map<vector<ll>,vector<ll>>path;

ll mn=inf;

vector<ll>rev(vector<ll>&v,ll idx)
{
    vector<ll>p;

    for(ll i=0; i<=idx; i++)
    {
        p.push_back(v[i]);
    }
    reverse(p.begin(),p.end());
    for(ll i=idx+1; i<v.size(); i++)
    {
        p.push_back(v[i]);
    }
    return p;
}

void bfs(vector<ll>&v)
{

    queue<pair<vector<ll>,ll>>q;

    q.push({v,0});

    while(!q.empty())
    {
        auto it=q.front();
        q.pop();
        vector<ll>node=it.first;
        ll currdis=it.second;

        if(is_sorted(node.begin(),node.end()))
        {
            cout<<"level:"<<lvl[node]<<endl;
            cout<<"Total Cost:"<<currdis<<endl;
            cout<<"Cost Path: ";

            for(auto it:path[node])cout<<it<<" ";
            cout<<endl;

            vector<ll>tmp=v;
            for(auto it:path[node])
            {
                tmp=rev(tmp,it-1);

                cout<<"BY reversing "<<it<<" Element: ";
                for(auto it1:tmp)
                {
                    cout<<it1<<" ";
                }
                cout<<endl;
            }
            cout<<endl;


            return;
        }
        for(ll i=1; i<node.size(); i++)
        {
            vector<ll>temp=rev(node,i);


            if(vis[temp]==0)
            {

                vis[temp]=1;
                q.push({temp,currdis+i+1});
                lvl[temp]=lvl[node]+1;

                for (auto cst : path[node])
                {
                    path[temp].push_back(cst);
                }
                path[temp].push_back(i+1);
            }
        }
    }
}


void solve()
{
    //freopen("textnew.txt","r",stdin);
    vector<ll>v;
    //vector<ll>p;
    map<ll,ll>mp;
    ll n,i,j,k,m;
    string s,t;
    cin>>n;
    ans.clear();
    for(i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }

    bfs(v);

}
int main()
{
    fast;
    int T=1;
    //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}

