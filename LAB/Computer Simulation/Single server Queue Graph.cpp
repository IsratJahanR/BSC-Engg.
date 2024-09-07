#include<bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
#include<string>
#include<graphics.h>

using namespace std;
void Setcolor(int n)
{
    n+=7;
    setcolor(n%16);
}
int main()
{
   int n=5;///Number_of_customer
   int t=10;///total_time
   vector<pair<int,int>>customer={{1,2},{2,3},{5,2},{6,1},{7,2}};
   for(int i=1;i<=n;i++)
   {
       //int arrive_time=rand()%t;
       //int service_time=rand()%t;
       //cin>>arrive_time>>service_time;
       //customer.push_back({arrive_time,service_time});

   }
   sort(customer.begin(),customer.end());
  // for(auto it:customer)cout<<it.first<<" "<<it.second<<endl;
   int Gd= DETECT,Gm;
   initgraph(&Gd ,&Gm, "C:\\TC\\BGT");
   settextstyle(DEFAULT_FONT,HORIZ_DIR,8);
  //
   initwindow(1000,600);
   line(100,500,960,500);
   line(100,500,100,40);
   outtextxy(965,490,"t");
   outtextxy(90,25,"Q(t)");



   int people=450/n;
   int k=500;

   for(int i=0;i<=n;i++)
   {
      char ch[100];
      sprintf(ch,"%d",i);

      outtextxy(80,k-5,ch);
      line(95,k,105,k);
      k-=people;
   }
   int time=850/t;
   k=100;
   for(int i=0;i<=t;i++)
   {
      char ch[100];
      sprintf(ch,"%d",i);

      outtextxy(k,505,ch);
      line(k,495,k,505);
      k+=time;
   }
   int x1=100,y1=500,x2=100,y2=300;
    k=0;

   queue<pair<int,int>>q;

   int i=0;
   int init=0;
   while(x1<=950)
   {

       y2=50+(people*(n-q.size()));
       line(x1,y1,x2,y2);
       //circle(x2,y2,1);
       if(k==time)
       {
           setcolor(WHITE);
           k=0;
           init++;
           cout<<"Time : "<<init<<endl;
       if(!q.empty())
       {
           int ff=q.front().first;
           int ss=q.front().second;
           if(ss==1){
                //cout<<ss<<" out"<<endl;
                char ch[100];
                sprintf(ch,"%d",ss);

                outtextxy(init*time,550,ch);
                q.pop();
           }
           else q.front().second--;
       }

       }
       else
       {
           Setcolor(q.size());
       }
       if(init==customer[i].first){
            //cout<<customer[i].first<<" in"<<endl;
            char ch[100];
                sprintf(ch,"%d",customer[i].first);

                outtextxy(init*time,550,ch);
            q.push(customer[i]);
            i++;
       }
       k++;
       x1++;
       x2++;
       delay(10);
   }



   getch();
   closegraph();
   return 0;

}


