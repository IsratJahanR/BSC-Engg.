#include <bits/stdc++.h>
using namespace std;

int stringTonum(string s)
{
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        ans+=s[i]-'0';
        ans*=10;
    }
    return ans/10;
}
vector<int> getValues()
{

    vector<int>input;
    string fileName="input.txt";
    ifstream myFile;
    myFile.open(fileName);
    if(myFile.is_open())
    {

        string line;
        while(getline(myFile,line))
        {
            string ss="";
            int got=0;
            for(int i=0;i<line.size();i++)
            {

                if(line[i]=='=')got=1;
                if(got and line[i]>='0' and line[i]<='9')
                {
                    ss+=line[i];
                }
                else if(got and ss.size()>0)
                {
                   input.push_back(stringTonum(ss));
                   ss="";
                }
            }
            got=0;
            if(ss.size()) input.push_back(stringTonum(ss));


        }
        myFile.close();
    }

    return input;
}
void BruteForce(vector<int>&arr)
{
    int cost=0;
    for(int i=3;i>0;i--)
    {
        int mx= arr[i];
        int pos=i;
        for(int j=0;j<i;j++)
        {
           if(arr[j]>mx)
           {
               mx=arr[j];
               pos=j;
           }
        }
        if(pos==i)continue;
        if(pos!=0)
        {
           cost+=pos+1;

            int j=0;
            while(j<pos)
            {
                swap(arr[j],arr[pos]);
                pos--;
                j++;
            }
        }
        pos=i;
        cost+=i+1;
        int j=0;
        while(j<pos)
        {
            swap(arr[j],arr[pos]);
            pos--;
            j++;
        }
      for(int k=0;k<4;k++)
      {
          cout<<arr[k]<<" ";
      }
      cout<<"cost "<<cost<<endl;

    }
}



vector<int>Flip(vector<int>&v,int pos)
{
    vector<int>p=v;
    int i=0,j=pos;
    while(i<j)
    {
        swap(p[i],p[j]);
        i++;
        j--;
    }
    return p;
}
void bfs(vector<int>&v)
{
    map<vector<int>,int>vis;
    map<vector<int>,int>lvl;
    map<vector<int>,vector<int>>path;
    queue<pair<vector<int>,int>>q;

    q.push({v,0});

    while(!q.empty())
    {
        auto it=q.front();
        q.pop();
        vector<int>node=it.first;
        int currcost=it.second;

        if(is_sorted(node.begin(),node.end()))
        {


            ///for(auto it:path[node])cout<<it<<" ";
            ///cout<<endl;

            vector<int>tmp=v;
            for(auto it:path[node])
            {
                tmp=Flip(tmp,it-1);

                cout<<"Fliped "<<it<<" Slices, Pancake Look like : ";
                for(auto it1:tmp)
                {
                    cout<<it1<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
            cout<<"Needed  flip : "<<lvl[node]<<endl;
            cout<<"Minimum Cost : "<<currcost<<endl;

            return;
        }
        for(int i=1;i<node.size();i++)
        {
            vector<int>temp=Flip(node,i);
            if(vis[temp]==0)
            {
                vis[temp]=1;
                q.push({temp,currcost+i+1});
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


int forward_cost(vector<int>&v)
{
    vector<int>p=v;
    sort(p.begin(),p.end());
    int cost=0;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=p[i])cost++;
    }
    return cost;
}
void Aster(vector<int>&v)
{
    map<vector<int>,int>vis;
    map<vector<int>,int>lvl;
    map<vector<int>,int>mincost;

    //queue<pair<vector<int>,int>>q;
    priority_queue<pair<int,vector<int>>,vector<pair<int,vector<int>>>,greater<pair<int,vector<int>>>>q;
    int fcost=forward_cost(v);
    q.push({fcost,v});
    mincost[v]=0;

    while(!q.empty())
    {
        auto it=q.top();
        q.pop();
        vector<int>node=it.second;
        int currcost=it.first;

        if(is_sorted(node.begin(),node.end()))
        {
            cout<<"Total Needed  flip : "<<lvl[node]<<endl;
            cout<<"Total Minimum Cost : "<<mincost[node]<<endl;
            return;
        }
        for(int i=1;i<node.size();i++)
        {
            vector<int>temp=Flip(node,i);
            if(vis[temp]==0)
            {
                vis[temp]=1;
                fcost=forward_cost(temp);
                int bcost=currcost+i+1;
                mincost[temp]=mincost[node]+i+1;
                q.push({bcost+fcost,temp});
                lvl[temp]=lvl[node]+1;
            }
        }
    }
}

int main()
{
    cout<<"Name :   Israt Jahan Reshma"<<endl;
    cout<<"ID   :   18CSE241"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    vector<int>values = getValues();
    // for(auto it: values)cout<<it<<endl;
    int n = values[0];
    cout<<"Number of Pancake Slice : "<<n<<endl;

    vector<int>v(n);
    for(int i=0;i<n;i++)v[i]=values[i+1];
    cout<<"Pancake sizes : ";
    for(int i=0; i<n; i++)cout<<v[i]<<" ";

    int cs;
    cout<<endl<<endl;
    while(1)
    {
        cout<<"Put 1 for using BruteForce, 2 for bfs and 3 for using A*"<<endl;
        cout<<"--------------------------------------------------------"<<endl;
        cout<<"Chose : ";
        cin>>cs;

        cout<<endl;
        if(cs==1)
        {
           BruteForce(v);
        }
        else if(cs==2)
        {
            bfs(v);
        }
        else Aster(v);
        cout<<"Are you Continue ? put Y for Yes ans N for No (Y/N) : ";
        char ch;
        cin>>ch;
        if(ch=='n' or ch=='N')return 0;
        cout<<endl;
    }

}
