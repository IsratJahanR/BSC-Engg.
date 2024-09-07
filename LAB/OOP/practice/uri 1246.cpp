#include<stdio.h>
int c;
int lot[1001];
void initlot()
{
    int i;
    for(i=0;i<c;i++)
        lot[i]=0;
}
int searchfreelot(int Q)
{
    int i,j;
    for(i=0;i<c;i++)
        if(0==lot[i])
    {
        for(j=0;j<Q;j++)
            if(0!=lot[i])
            break;
        if(j==Q)
            return i;
    }
    return 0;
}
void assignlot(int pos,int p,int Q)
{
    int i;
    for(i=0;i<Q;i++)
    lot[pos+i]=p;
}
void freelot(int p)
{
    int i;
    for(i=0;i<c;i++)
        if(lot[i]==p)
        lot[i]=0;
}
int countallocatelot()
{
    int i,count=0;
    for(i=0;i<c;i++)
        if(0!=lot[i])
        count ++;
    return count;

}
int main()
{
    int c,n,i,P,Q,pos,count;
    char ch,st[3];
    freopen("input.txt","r",stdin);
    while(2==scanf("%d %d",&c,&n))
    {
        initlot();
        count=0;
        for(i=0;i<n;i++)
        {
            scanf("%s",st);
            if('C'==st[0])
            {
                scanf("%d%d",&P,&Q);
                pos=searchfreelot(Q);

            if(0!=pos)
                assignlot(pos,P,Q);
            count+=Q;
        }
    else if('S'==st[0])
    {
        scanf("%d",&P);
        freelot(P);
    }
}
printf("%d\n",count*10);
}
return 0;
}
