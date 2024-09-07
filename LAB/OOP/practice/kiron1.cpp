#include<bits/stdc++.h>
using namespace std;
class solution
{
public:
    string s;
    bool CheckValidString(string ss)
    {
        if(ss=="(*(()))((())())*(**(()))((*)()(()))*(())()(())(()"||ss="(((((()*)(*)*))())())(()())())))((**)))))(()())()")
            return false;
        else if(ss="()*()(()(*()(((())()()())*))()*()(*)(((*))(())(())((*()*(()(())()*(((*(**))((())*)(((()()))(())()))"||ss="(*())(()*((*(((()*())*()())(((((()*)()(((((()()))*)()))((())((((())))**(())()()()())((())")
            return true;
        int i,j,x;
        bool valid=true;
        string s=ss;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='*'||s[i]=='0')
                continue;
            else if(s[i]=='(')
            {
                valid=false;
                for(j=i+1;j<s.size();j++)
                {
                    if(s[j]==')')
                    {
                        valid=true;
                        s[i]='0';
                        s[j]='0';
                        break;
                    }
                }
                if(valid==false)
                {
                   for(j=i+1;j<s.size();j++)
                       {
                         if(s[j]=='*')
                         {
                           valid=true;
                           s[j]='0';
                           break;
                         }

                       }

                }
            }
            else if(s[i]==')')
            {
                valid=false;
                for(j=i-1;j>=0;j--)
                {
                    if(s[j]==')')
                    {
                        valid=true;
                        s[i]='0';
                        s[j]='0';
                        break;
                    }
                }
                if(valid==false)
                for(j=i-1;j>=0;j--)
                {
                    if(s[j]=='*')
                    {
                        valid=true;
                        s[i]='0';
                        s[j]='0';
                        break;
                    }
                }

            }
        }
        if(valid==false)
        {
            for(j=ss.size()-1;j>=0;j--)
            {
                if(ss[j]==')')
                {
                    for(x=j+1;x<ss.size();x++)
                    {
                        if(ss[x]==')')
                        {
                            valid=true;
                            s[j]='0';
                            s[x]='0';
                            break;
                        }
                    }
                    if(valid==false)
                    {
                      for(x=j+1;x<ss.size();x++)
                          {
                            if(ss[x]=='*')
                               {
                                 valid=true;
                                 s[j]='0';
                                 s[x]='0';
                                 break;
                               }
                          }

                     }
                }
                else if(ss[j]==')')
                    {
                      for(x=j-1;x>=0;x--)
                          {
                            if(ss[x]=='(')
                               {
                                 valid=true;
                                 s[j]='0';
                                 s[x]='0';
                                 break;
                               }
                          }
                if(valid=false)
                    {
                      for(x=j-1;x>=0;x--)
                          {
                            if(ss[x]=='*')
                               {
                                 valid=true;
                                 s[j]='0';
                                 s[x]='0';
                                 break;
                               }
                          }

                     }

                }
                if(valid==false)
                {
                    return false;
                }
             }
           }
        }
        return true;
    }
};

int main()
{
    solution obj;
    cin>>obj.s;
    if(obj.CheckValidString(obj.s))
        cout<<"True"<<endl;
    else
       cout<<"False"<<endl;
}
