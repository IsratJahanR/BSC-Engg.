#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float x[n][n];
    int s=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++){
                cin>>x[i][j];
        if(i+j-1==n)s+=x[i][j];
        }
    }
    float ss=(float)s/n;

    cout<<ss<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j)printf("%.8lf ",x[i][j]);
            if(i+j-1==n)printf("%.8lf ",ss);

        }
        cout<<endl;

    }
}
