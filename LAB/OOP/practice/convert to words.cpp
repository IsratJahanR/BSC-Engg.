#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
void convert_to_word(char *num)
{
    int len=strlen(num);
    if(len==0)
    {
        fprintf(stderr,"empty  string\n");
        return ;
    }
    if(len>4)
    {
        fprintf(stderr,"lenth is more than 4\n");
        return ;
    }
    char *single_digit[]={" zero","one","two","three","four","five","six","seven","eight","nine"};
    char *two_digit[]={" ","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen"};
    char *tens_multiple[]={" "," ","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
    char *tens_power[]={"hundred","thousand"};
    printf("%d\n",num);
    if(len==1){
              printf("%s\n",single_digit[*num-'0']);
              return ;
              }
     while(*num!='\0'){
        if(len>=3){
            if(*num-'0'!=0){
               printf("%s\n",single_digit[*num-'0']);
               printf("%s\n",tens_power[len-3]);

            }
            len--;
        }
        else
        {
          if(*num=='1'){
              int sum=*num-'0'+*(num+1)-'0';
              printf("%s\n",two_digit[sum]);
              return;
          }
          else if(*num=='2'&&*(num+1)=='0'){
            printf("twenty\n");
            return;
          }
          else
          {
              int i=*num-'0';
              printf("%s ",i?tens_multiple[i]: " ");
              ++num;
              if(*num!='0')
               printf("%s\n",single_digit[*num-'0']);

          }

     }
     ++num;
   }
}

int main()
{
convert_to_word("1234");
return 0;
}


