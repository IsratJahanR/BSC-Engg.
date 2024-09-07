#include<bits/stdc++.h>
#include <stdio.h>
#include<iostream>
#include <fstream>

using namespace std;

vector<string> sk={"auto","break","case","char","const","continue","volatile",
   "default","do","double","else","enum",	"extern","float","for",	"goto",	"if",
   "int", "long","register","return","short","signed","sizeof","static"
   "struct","switch","typedef","union","unsigned","void","while"};

vector<string>res={"namespace","using","and","or","xor","cin","endl","main","std","cout","include","iostream","NULL","string"};

vector<string>key;
vector<string>scm;
vector<string>dcm;
vector<string>nmbr;
vector<string>vari;

bool keyword(string &s)
{
    if(find(sk.begin(), sk.end(),s) != sk.end()) return true;
    return false;
}
bool reserve(string &s)
{
    if(find(res.begin(), res.end(), s) != res.end() ) return true;
    return false;
}
bool isVar(string s)
{
    int c=0;
    int i=0;
    int n=s.size();
    if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z'))i++;
    if(i==0)return false;
    while((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9'))
    {
            i++;
    }
    if(i==n)return true;
    return false;
}

bool isnum(string s)
{
    int i=0;
    int p=0,nn=0;
    int n=s.size();
    while(i<n)
    {
        int f=0;
       if(s[i]>='0' && s[i]<='9')
       {
           f=1;
           nn++;
           i++;
           continue;
       }
       else if(s[i]=='.')
       {
           f=1;
           p++;
           nn=0;
           i++;
       }
       if(!f)return false;

   }
   if(p>0 && nn==0)return false;
   if(i==n)return true;

   return false;
}
void get(string s)
{
    if(keyword(s))key.push_back(s);
    else if(!reserve(s))
    {
        if(isVar(s))vari.push_back(s);
        else if(isnum(s))nmbr.push_back(s);
    }

}

void store(vector<string> &s,string filename)
{
    map<string,int>mp;
    for(auto x:s)mp[x]++;
    fstream file;

	file.open(filename, ios::out);
    for(auto x:mp)file <<x.first<<endl;


    file.close();
}

int main(){
    vector<string>s;
    string txt;

    ifstream MyReadFile("CPP CODE.txt");
    while (getline (MyReadFile, txt))
    {
      s.push_back(txt);

    }

    MyReadFile.close();

    int com=0;
    int dc=0;
    int f=0;
    int ct=0;
    for(auto ss: s)
    {
        int sz=ss.size();
        if(ss[0]=='#')continue;

        string st="";

        for(int j=0;j<sz;j++)
        {
            if((ss[j]=='/' && ss[j+1]=='*')|| f)
            {
               //j+=2;
               if(f==0)f=1,j+=2,dc=j;
               else dc=0;
               int ok=0;
               string sp="  ";
               while(j<sz)
               {
                   if(j+1<sz && ss[j]=='*' && ss[j+1]=='/')
                   {
                      ok=1;
                      f=0;
                      dcm.push_back(ss.substr(dc,j-dc));
                      break;
                   }
                   j++;
               }
               if(!ok)
               {
                  dcm.push_back(ss.substr(dc,sz-dc));
               }
            }
            else if(ss[j]=='"' || ct)
            {
                if(!ct)ct=1;
                j++;
                while(j<sz)
                {
                    if(ss[j]=='"')
                    {
                        ct=0;
                        break;
                    }
                    j++;
                }
            }
            else if(j+1<sz && ss[j]=='/' && ss[j+1]=='/')
            {
               scm.push_back(ss.substr(j+2,sz-j+1));
               if(st.size()==0)break;
               get(st);
               st="";
               break;
            }
            else if(ss[j]==' ' || ss[j]==';'|| ss[j]==',')
            {
               if(st.size()>0)get(st);
               st="";
            }
            else if(ss[j]=='(' || ss[j]=='{' || ss[j]==')')
            {
                if(st.size()>0)get(st);
                st="";
            }
            else if(ss[j]=='=' || ss[j]=='+' ||ss[j]=='-' ||ss[j]=='*' ||ss[j]=='/' ||ss[j]=='^' ||ss[j]=='%')
            {
                if(st.size()>0)get(st);
                st="";
            }
            else st+=ss[j];

        }
    }

    store(key,"KEY.txt");
    store(nmbr,"NUM.txt");
    store(vari,"ID.txt");


    fstream file;

	file.open("COM.txt", ios::out);
    for(auto x:scm)file <<x<<endl;
	file<<endl;
	for(auto x:dcm)file <<x<<endl;

    file.close();

    return 0;
}
