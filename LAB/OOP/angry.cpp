#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
      //freopen("inputNew.txt", "r", stdin);

      int t;
      cin>>t;
      while(t--){
            int n,m;
            cin>>n>>m;

            ll arr[n][m];
            ll markCol[m];
            ll markRow[n];

        for(int i=0;i<m;i++){markCol[i]=0;}
        for(int i=0;i<n;i++){markRow[i]=0;}

            for(int i=0; i<n; i++){
                  bool found=false;
                  for(int j=0; j<m; j++){
                        cin>>arr[i][j];
                        if(arr[i][j]) {markCol[j]=1;found=true;}
                  }
                  if(found) markRow[i]=1;
            }

            ll cnt=0;
            for(int i=0; i<n; i++){
                  if(markRow[i]==0){
                        for(int j=0; j<m; j++){
                              if(markCol[j]==0) {markCol[j]=1;cnt++;break;}
                        }
                  }
            }
            if(cnt%2) cout<<"Ashish"<<endl;
            else cout<<"Vivek"<<endl;
      }

}
