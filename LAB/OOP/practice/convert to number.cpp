#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char num[10][10]={" zero","one","two","three","four","five","six","seven","eight","nine"};
    char input[100],word[10],*ptr,*tmp;
    int i,value=0,len;
    cout<<"Enter number in words : ";
    fgets(input,100,stdin);
    input[strlen(input)-1]='\0';
    tmp=input;
    while(1)
    {
        ptr=strchr(tmp,' ');
        if(ptr!=NULL){
            len=ptr-tmp;
            strncpy(word,tmp,len);
            word[len]='\0';
            tmp=ptr+1;

        }
        else
        {
            len=strlen(tmp);
            strncpy(word,tmp,len);
            word[len]='\0';

        }
        for(i=0;i<10;i++)
        {
            if(strcasecmp(word,num[i])==0)
            {
                value=(value*10)+i;
                break;
            }
        }
        cout<<value<<endl;

    }
}
