#include<bits/stdc++.h>
#include <queue>
#include<time.h>
#include<math.h>
#include<utility>
#include<vector>
#include <iostream>
#include <set>
#include <iterator>
#define pi            3.1416
#define pb            push_back
#define loop(i,n)     for(int i=0;i<n;i++)
#define END           return 0;
#define nl            endl
#define F             first
#define S             second
#define mp            make_pair
#define ll            long long
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)      (a*b)/gcd(a,b)
using namespace std;
int main() {
    int t; cin>>t; while(t--)
    {
        int n;
        cin>>n;
        int g=9;
        for(int i=0;i<n;i++)
        {
            cout<<g;
            if(g==0)g=10;
            g--;
        }
    }

return 0;
}
