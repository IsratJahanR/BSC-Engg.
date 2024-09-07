#include<bits/stdc++.h>
#include <utility>
#define loop(i,n)          for(int i=0;i<n;i++)
#define ll                 long long
#define F                  first
#define S                  second
#define mp                 make_pair
#define pb                 push_back
using namespace std;
int main()
{
  pair<int,int>pr;
  pair<int,int>prr;
  pr=mp(10,20);
  prr=mp(12.5,'A');
  cout<<pr.F<<" "<<pr.S<<endl;
  cout<<prr.F<<" "<<prr.S<<endl;
      vector< pair<int,int> > ans;
  loop(i,5)  ans.push_back(make_pair(i,i+5));
  loop(i,5)  cout<<ans[i].F<<" "<<ans[i].S<<endl;
}

