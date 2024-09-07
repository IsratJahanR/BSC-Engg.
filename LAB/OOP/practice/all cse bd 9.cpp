#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0;
    cin>>n>>k;
    string s;
    cin>>s;
    c=n-1;
	while(s.substr(0,c)!=s.substr(n-c))c--;
	cout << s;
	for(int j=0;j<k-1;j++)cout << s.substr(c);
	cout << endl;
    return 0;
}
