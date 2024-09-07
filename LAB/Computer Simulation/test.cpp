#include<graphics.h>
#include<windows.h>
#include<conio.h>
#include <stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
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
vector<pair<int,int>> getUser()
{

    vector<pair<int,int>>input;
    string fileName="input.txt";
    ifstream myFile;
    myFile.open(fileName);
    int cnt=0;
    if(myFile.is_open())
    {

        string line;
        while(getline(myFile,line))
        {
            cnt++;
            if(cnt==1)continue;
            string ss="";
            int num1,num2;
            for(int i=0;i<line.size();i++)
            {

                if(line[i]==' ')
                {
                    if(ss.size())
                    {
                       num1=stringTonum(ss);
                       ss="";
                    }

                }
                else ss+=line[i];
            }
            if(ss.size()) num2=stringTonum(ss);
            input.push_back({num1,num2});


        }
        myFile.close();
    }

    return input;
}

int main()
{
    vector<pair<int,int>> User=getUser();

    for(auto it:User)cout<<it.first<<" "<<it.second<<endl;

}
