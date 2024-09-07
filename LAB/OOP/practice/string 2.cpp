#include<iostream>
#include<stdio.h>
#include<string.h>
#define MAX_Size N
//using namespace std;
int main()
{
    int N,i=0,j=0,sum=0,k=1;
    char s[80][80];
    char srch='O';
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
    scanf("%[^\n]",&s[i]);
    }
for(i=0;i<N;i++){     while(s[i]!='\0')
            {

                    if(s[i]=='O'){
                    sum=sum+k;
                     k++;
                    }
                     else{
                        k=1;

                     }

                i++;
            }
            printf("%d",sum);


    }


}
