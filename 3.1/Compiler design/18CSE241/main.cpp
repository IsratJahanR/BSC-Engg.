/// Author : ISRAT JAHAN RESHMA
/// ID     : 18ICTCSE041
/// This is a program to tokenize the given txt file(source code)



#include<bits/stdc++.h>
#include <fstream>
//#include "Reserve word.h"


using namespace std;


/*bool isHas(string &s)
    {
        if(find(sk.begin(),sk.end(), s) != sk.end())return true;

        return false;
    }
*/
class File{

public:
    vector<string> ReadSourceCode(string filename)
    {
        vector<string>s;
        string txt;
        ifstream MyReadFile(filename);
        while (getline (MyReadFile, txt))
        {
          s.push_back(txt);
        }

        MyReadFile.close();

        return s;
    }
    void WriteIntoTextFile(vector<string> &s,string filename)
    {
        set<string>st;
        for(auto it:s)st.insert(it);

        fstream file;

        file.open(filename, ios::out);
        if (!file)cout << "File not created!";

	    else {
		//cout << "File created successfully!";
		for(auto x:st)file <<x<<endl;
		file.close();
	    }



        file.close();
    }

};

class Laxical{
protected:
    vector<string> KeyWords={"int", "long","register","return","short","signed","auto","break",
   "case","char","const","continue","volatile","default","do","double","else","enum",
   "extern","float","for","goto","if","sizeof","static","struct","switch","typedef"
   ,"union","unsigned","void","while"};


   vector<string>ReserveWord={"namespace","using","and","bitand" ,"compl","not_eq","or_eq","xor_eq","and_eq ",
  "bitor","not","or","xor","cin","endl","INT_MIN","iomanip","main","npos","std",
   "cout","include","INT_MAX","iostream","MAX_RAND","NULL","string","bool","true"};


public:

    bool isReserveWord(string &token)
    {
        if(find(ReserveWord.begin(), ReserveWord.end(), token) != ReserveWord.end())
            return true;

        return false;
    }
    bool isKeyword(string &token)
    {
        if(find(KeyWords.begin(), KeyWords.end(), token) != KeyWords.end())
            return true;

        return false;
    }

    bool isIdentifier(string &s)
    {
        int i=0;
        int sz=s.size();
        if(isalpha(s[0]) || s[0]=='_')i++;
        else return false;


        while(isalpha(s[i])||isdigit(s[i]))i++;

        if(i==sz)return true;
        return false;
    }
    bool op(char ch)
    {
        if(ch=='='||ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^' || ch=='%')return true;
        return false;
    }
    bool isSpecial(char ch)
    {
        if(ch==' ' || ch==';'|| ch==',')return true;
        return false;
    }
    bool isBracket(char ch)
    {
        if(ch=='(' || ch=='{'|| ch==')'|| ch=='}' || ch=='>' || ch=='<')return true;
        return false;
    }
    bool isSeparator(char ch)
    {
        if(op(ch) || isSpecial(ch) || isBracket(ch))return true;
        return false;

    }
    bool isNumber(string s)
    {
        int i=0;
        if(s[0]=='-')i=1;
        int pnt=0,cnt_num=0;
        int sz=s.size();
        int j=i;
        while(i<sz)
        {
            while(isdigit(s[i]))
            {
                cnt_num++;
                i++;
            }
            if(s[i]=='.')
            {
                pnt++;
                cnt_num=0;
                i++;
            }
               /*else if(s[i]=='e')
               {
                  if(cnt_num==0)return false;
                  i++;
               }*/
            if(i==j)return false;

           }
           if(pnt>0 && cnt_num==0)return false;
           if(i==sz)return true;
           return false;
    }

};

class Tokenize
{

protected:
    //public:
    vector<string>key;
    vector<string>scm;
    vector<string>dcm;
    vector<string>nmbr;
    vector<string>vari;

    Laxical obj;
    File F;

public:
    void get(string s)
    {
        //cout<<s<<endl;

        if(obj.isKeyword(s))key.push_back(s);
        else if(!obj.isReserveWord(s))
        {
            if(obj.isIdentifier(s))vari.push_back(s);
            else if(obj.isNumber(s))nmbr.push_back(s);
        }


    }
    void getComment(string &s,int n)
    {
        if(n==1)scm.push_back(s);
        else dcm.push_back(s);

    }
    void StoreIntoFile()
    {
        F.WriteIntoTextFile(key,"keywords.txt");
        F.WriteIntoTextFile(nmbr,"Number.txt");
        F.WriteIntoTextFile(vari,"Identifier.txt");
        F.WriteIntoTextFile(scm,"SingleLineComments.txt");
        F.WriteIntoTextFile(dcm,"DoubleLineComments.txt");
    }
    void print(vector<string>&s)
    {
        //cout<<endl<<endl;
        for(auto x:s)
        {
            cout<<x<<endl;
        }
        cout<<endl<<endl;
    }
    void Print()
    {
       cout<<"Keywords are: ";
       //cout<<key.size()<<endl;
       print(key);

       cout<<"Numbers are: ";
       print(nmbr);

       cout<<"Single comment : ";
       print(scm);

       cout<<"Double comment: "<<endl;
       print(dcm);

       cout<<"Identifiers are : ";
       print(vari);


      // cout<<"operators are : ";
       //print1(oper);

    }


};

int main() {

    File F;
    Tokenize T;
    Laxical L;

    vector<string>s;
    s=F.ReadSourceCode("source code.txt");

    //for(auto x: s)cout<<x<<endl;

    int start=0;
    int see=0;
    bool found=false;
    string com;
    for(auto token: s)
    {
        int i=0;
        int sz=token.size();

        while(i<sz && token[i]==' ')i++;
        if(token[i]=='#'){
                //cout<<j<<endl;
                continue;
        }


        string temp="";
        int ct=0;
        while(i<sz)
        {
            if((token[i]=='/' && token[i+1]=='*')|| see)
            {
               if(see)start=0;
               else see=1,i+=2,start=i;

               int got=0;

               while(i<sz)
               {
                   if(i+1<sz && token[i]=='*' && token[i+1]=='/')
                   {

                      int len=i-start;
                      com=token.substr(start,len);
                      T.getComment(com,2);
                      got=1;
                      see=0;
                      break;
                   }
                   i++;
               }
               if(!got)
               {
                  int len=sz-start;
                  com=token.substr(start,len);
                  T.getComment(com,2);
               }
            }
            else if(token[i]=='"' || ct)
            {
                if(!ct)ct=1;
                i++;
                while(i<sz)
                {
                    if(token[i]=='"')
                    {
                        ct=0;
                        break;
                    }
                    i++;
                }
            }
            else if(i+1<sz && token[i]=='/' && token[i+1]=='/')
            {
               com=token.substr(i+2,sz-i+1);
               T.getComment(com,1);
               if(temp.size())T.get(temp);
               temp="";
               break;
            }

            else if(L.isSeparator(token[i]))
            {
                //cout<<token[i]<<endl;
               if(temp.size())T.get(temp);
               temp="";
            }

            else temp+=token[i];


            i++;


        }
    }

    T.StoreIntoFile();
    T.Print();




}
