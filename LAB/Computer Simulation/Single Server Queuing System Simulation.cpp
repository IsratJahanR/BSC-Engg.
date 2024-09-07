#include<graphics.h>
#include<windows.h>
#include<conio.h>
#include <stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

int yy=70;
int y1=100;

void drawCircle(int x,int y,int id)
{

    setfillstyle(SOLID_FILL,9);
    circle(x,y,20);
    rectangle(x-20,y+20,x+20,y+60);
    line(x-6,y+60,x-6,y+80);
    line(x+6,y+60,x+6,y+80);
    floodfill(x,y,15);

    setcolor(WHITE);
    setbkcolor(9); //textbk
    char c[10];
    sprintf(c,"%d",id);
    outtextxy(x-textwidth(c)/2,y-textheight(c)/2,c);
    setbkcolor(3);
}
void removeCircle(int x,int y,int id)
{
    setfillstyle(SOLID_FILL,3);
    circle(x,y,15);
    floodfill(x,y,3);

    setcolor(3);
    setbkcolor(3); //textbk
    char c[10];
    sprintf(c,"%d",id);
    outtextxy(x-textwidth(c)/2,y-textheight(c)/2,c);
    setbkcolor(3);
    setcolor(15);

}

void movto_queue(int sz,int time,int id,int src)
{
    int st=70;
    int ed=650-sz*41;
    int y=200;
    for(int x=st; x<=ed; x++)
    {
        if(x==ed) drawCircle(x,y,id);
        else
        {

            drawCircle(x,y,id);
            delay(0.95);
            removeCircle(x,y,id);
        }
    }

    char arr[10];
    sprintf(arr,"%d",id);
    outtextxy(860,yy,"P");
    outtextxy(880,yy,arr);

    char arr1[10];
    sprintf(arr1,"%d",time);
    outtextxy(950,yy,arr1);

    char arr2[10];
    sprintf(arr2,"%d",src);
    outtextxy(1020,yy,arr2);
}

void exit(int id,int ses)
{
    int st=275,en=350;
    for(int y=st; y<=en; y++)
    {
        drawCircle(655,y,id);
        delay(1);
        removeCircle(655,y,id);

    }
    char arr[10];
    sprintf(arr,"%d",ses);
    outtextxy(1120,y1,arr);

    /*setfillstyle(SOLID_FILL,3);
    ellipse(875, 78+id*40, 0,360,28,11);
    floodfill(875, 78+id*40,3);
    setbkcolor(3);
    setcolor(3);
*/

}
void arrow()
{

    outtextxy(490,90,"On Service");
    int st=640;
    int ed=660;
    int y=150;
    for(int x=st;x<=ed;x++)
    {
        if(x<650)
        {
            y++;
        }
        else y--;
        line(x,100,x,y);

    }
}
void inService(int id)
{
    setfillstyle(SOLID_FILL,9);
    ellipse(875, 78+id*40, 0,360,30,12);
    setbkcolor(3);
}

void movPerson(queue<int>q)
{

    int sz=q.size();
    for(int ii=1; ii<=sz; ii++)
    {
        int tp=q.front();
        q.pop();
        int x;
        for(x=650-(ii)*41; x<650-(ii-1)*41; x++)
        {
            drawCircle(x,200,tp+1);
            delay(1);
            removeCircle(x,200,tp+1);

        }
        drawCircle(x,200,tp+1);

        q.push(tp);
    }
}
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
int NeededTime(vector<pair<int,int>>customer)
{

    int time=0;
    for(auto it:customer)
    {
        if(it.first>time)time=it.first;
        time+=it.second;
    }
    return time;
}
void PresentTime(int n,int time)
{

    rectangle(5,5,1195,30);
    time++;
    outtextxy(10,10,"The Simulation Represent a Single Server Queuing Bank");
    outtextxy(10,40,"Time = ");
    char arr[10];
    sprintf(arr,"%d",time);
    outtextxy(100,40,arr);

    outtextxy(150,40,", Customer = ");
    sprintf(arr,"%d",n);
    outtextxy(330,40,arr);
}
void counter_clock()
{
    vector<pair<int,int>>customer= getUser();
    int n=customer.size();
    int time=NeededTime(customer);
    PresentTime(n,time);

    sort(customer.begin(),customer.end());
    int tt[n];
    for(int i=0; i<n; i++)
    {
        tt[i]=customer[i].second;
    }
    int it=0;
    queue<int>q;
    int exit_id=-1;
    int enter_id=-1;
    for(int i=0; i<=15; i++)
    {
        char arr[10];
        sprintf(arr,"%d",i);
        outtextxy(740,120,arr);
        delay(1500);
        exit_id=-1;
        enter_id=-1;
        delay(1500);
        if(!q.empty())
        {
            int in=q.front();
            tt[in]--;
            if(tt[in]==0)
            {
                q.pop();
                exit_id=in;
            }
            //inService(q.front()+1);
        }

        if(exit_id!=-1)
        {
            exit(exit_id+1,i);
            y1+=40;

        }
        if(exit_id!=-1)movPerson(q);
        if(i==customer[it].first)
        {
            enter_id=it;
            q.push(it);
            it++;
            yy+=40;
        }
        int sz=q.size();
        if(enter_id!=-1)
        {
            movto_queue(sz-1,i,enter_id+1,tt[it-1]);

        }



    }
}

void in_design()
{

    line(100,175,700,175);
    line(100,320,600,320);

    line(600,320,600,440);

    rectangle(705,150,800,350);
    //rectangle(705,100,800,150);
    ellipse(749, 115, 0,360,55,30); ///timer_elipse
    settextstyle(10,0,6);
    ellipse(650, 460, 0,360,50,25); ///exit_elipse
    ellipse(60, 150, 0,360,60,25); ///enter_elipse
    setbkcolor(3);

    outtextxy(737,160,"B");
    outtextxy(737,200,"A");
    outtextxy(737,240,"N");
    outtextxy(737,280,"K");

    settextstyle(4,0,1);
    outtextxy(710,102,"TIME");
    outtextxy(620,450,"EXIT");
    outtextxy(12,140,"ENTER");
    settextstyle(3,VERT_DIR,3);

    //rectangle(900,150,1000,350);

    outtextxy(850,40,"Person");
    outtextxy(850,60,"Enter");

    outtextxy(930,40,"Arrival");
    outtextxy(930,60,"Time");

    outtextxy(1010,40,"Service");
    outtextxy(1010,60,"Time");

    outtextxy(1090,40,"Finishing");
    outtextxy(1090,60,"Time");
    line(810,85,1180,85);
    settextstyle(4,0,1);


    arrow();
}
void simulation()
{
    in_design();
    counter_clock();
}
int main()
{
    initwindow(1200,600);
    setbkcolor(3);
    cleardevice();
    simulation();
    getch();
}
