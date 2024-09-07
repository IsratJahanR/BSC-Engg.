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
vector<int> getValues()
{

    vector<int>input;
    string fileName="values.txt";
    ifstream myFile;
    myFile.open(fileName);
    if(myFile.is_open())
    {

        string line;
        while(getline(myFile,line))
        {
            string ss="";
            for(int i=0;i<line.size();i++)
            {

                while(i<line.size() && line[i]>='0' && line[i]<='9')
                {
                    ss+=line[i];
                    i++;

                }
                if(ss.size())
                {
                   input.push_back(stringTonum(ss));
                   ss="";
                }
            }
            if(ss.size()) input.push_back(stringTonum(ss));


        }
        myFile.close();
    }

    return input;
}

void showgraph(double lvl,double prelvl)
{
   // cout<<prelvl<<" "<<lvl<<endl;
    int strt=300;
    if(lvl<0)
    {

        if(prelvl>0)
        {
           setcolor(3);
           int str1=300-10*prelvl;
           for(double i=0;i<prelvl;i++)
            {
                for(int j=0;j<10;j++)
                {
                    line(550,str1,650,str1);
                    str1++;
                }
            }
            setcolor(RED);
            for(double i=lvl;i<0;i++)
            {
                for(int j=0;j<10;j++)
                {
                    line(550,strt,650,strt);
                    strt++;
                }
            }
        }
        else if(prelvl<lvl)
        {
           setcolor(3);
           int str1=300+10*abs(prelvl);
           for(int i=prelvl;i<lvl;i++)
            {
                for(int j=0;j<10;j++)
                {
                    line(550,str1,650,str1);
                    str1--;
                }
            }
            setcolor(WHITE);
        }
        else
        {
            int str1=300+10*(abs(prelvl));
            setcolor(RED);
            int dif=prelvl-lvl;
            for(int i=0;i<dif;i++)
            {
                for(int j=0;j<10;j++)
                {
                    line(550,str1,650,str1);
                    str1++;
                }
            }
        }




    }
    else
    {
        if(prelvl<0)
        {
           setcolor(3);
           int str1=300+10*abs(prelvl);
           for(double i=0;i<abs(prelvl);i++)
            {
                for(int j=0;j<10;j++)
                {
                    line(550,str1,650,str1);
                    str1--;
                }
            }
            setcolor(GREEN);
            for(double i=0;i<lvl;i++)
            {
                for(int j=0;j<10;j++)
                {
                    line(550,strt,650,strt);
                    strt--;
                }
            }

        }
        else if(prelvl>lvl)
        {
           // cout<<prelvl<<" "<<lvl<<endl;
           setcolor(3);
           int str1=300-10*prelvl;
           for(double i=lvl;i<prelvl;i++)
            {
                for(int j=0;j<10;j++)
                {
                    line(550,str1,650,str1);
                    str1++;
                }
            }
            setcolor(GREEN);
        }
        else
        {
            setcolor(GREEN);
            for(double i=0;i<lvl;i++)
            {
                for(int j=0;j<10;j++)
                {
                    line(550,strt,650,strt);
                    strt--;
                }

            }

        }


    }

}
void clk(int time)
{


    setcolor(BLACK);
    setbkcolor(15);
    char arr[10];
    sprintf(arr,"%d",time);
    outtextxy(340,112,arr);
    //setcolor(WHITE);
}
void printtext(int x,int y,int val)
{
    //setcolor(BLACK);
    //setbkcolor(15);
    char arr[10];
    sprintf(arr,"%d",val);
    outtextxy(x,y,arr);
    setcolor(WHITE);
}

void printfloat(int x,int y,double val)
{
    //setcolor(BLACK);
    //setbkcolor(15);
    char arr[10];
    sprintf(arr,"%0.2f",val);
    outtextxy(x,y,arr);
    setcolor(WHITE);
}

int dd=0;
int demand()
{
    setcolor(BLACK);
    setbkcolor(15);

    char arr[10];
    int dmd=rand()%4+1;
    dd++;
    sprintf(arr,"%d",dmd);
    outtextxy(145,240,arr);
    setcolor(WHITE);

    return dmd;
}
void right()
{
    outtextxy(850,40,"Day");
    //outtextxy(850,60,"Ordered");

    outtextxy(930,40,"Ordered");
    outtextxy(930,60,"cost");

    outtextxy(1010,40,"Holding");
    outtextxy(1010,60,"days");

    outtextxy(1090,40,"Backloged");
    outtextxy(1090,60,"days");
    line(810,85,1180,85);
    line(800,70,800,500);
}
void header()
{
    rectangle(5,5,1195,30);
    settextstyle(4,0,1);
    outtextxy(200,10,"The Simulation Represent a Inventory Management System");
}

void footer(int S,int s,int hc,int bc,int sc,int ic,int lvl)
{
    int y=570;
    settextstyle(3,0,2);
    outtextxy(10,y,"Inventory Policy = (");
    char arr[10];
    sprintf(arr,"%d",S);
    outtextxy(170,y,arr);
    outtextxy(190,y," , ");

    sprintf(arr,"%d",s);
    outtextxy(200,y,arr);
    outtextxy(215,y,")");

    outtextxy(240,y,"Settup Cost = ");
    sprintf(arr,"%d",sc);
    outtextxy(350,y,arr);

    outtextxy(400,y,"Increment Cost = ");
    sprintf(arr,"%d",ic);
    outtextxy(540,y,arr);

    outtextxy(590,y,"Holding Cost = ");
    sprintf(arr,"%d",hc);
    outtextxy(720,y,arr);

    outtextxy(770,y,"Backlog Cost = ");
    sprintf(arr,"%d",bc);
    outtextxy(900,y,arr);

    outtextxy(950,y," Initial Inventory Level = ");
    sprintf(arr,"%d",bc);
    outtextxy(1150,y,arr);


}

void design()
{

    line(180,150,520,150);
    line(350,100,500,150);
    line(200,150,350,100);
    rectangle(200,150,500,300);
    rectangle(5,565,1195,595);
    settextstyle(10,0,6);
    setbkcolor(3);
    outtextxy(210,160,"INVENTORY");
    settextstyle(4,0,1);
    settextstyle(3,VERT_DIR,3);
    //settextstyle(3,0,1);

    outtextxy(510,287,"0.0");
    outtextxy(115,200,"Demand");
    outtextxy(250,250,"Present Level  = ");

    settextstyle(4,0,1);

    circle(150,250,25);
    floodfill(151,251,15);
    outtextxy(330,80,"Day");
    circle(352,125,20);
    floodfill(353,126,15);
    line(30,430,700,430);

    line(29,350,29,500);



}
void ordercome()
{
    setcolor(WHITE);
    setbkcolor(3);
    outtextxy(550,50,"Order Come");
    delay(1000);
    setcolor(3);
    for(int i=0;i<105;i++)
    {
        line(550+i,50,550+i,70);
    }

}
void orderplaced()
{
    setcolor(WHITE);
    setbkcolor(3);
    outtextxy(550,50,"Order placed");
    delay(1000);
    setcolor(3);
    for(int i=0;i<120;i++)
    {
        line(550+i,50,550+i,70);
    }
    setcolor(WHITE);

}
void printlvl(int lvl)
{

    setbkcolor(3);
    setcolor(3);

   for(int i=400;i<=440;i++)
   {
       line(i,250,i,275);
   }
   setcolor(WHITE);
    char arr[10];
    sprintf(arr,"%d",lvl);
    outtextxy(400,250,arr);
}
void print_details(int d,int c1,int c2,int c3)
{
    int strt=90+(d/5)*20;
    //cout<<d<<endl;
    printtext(840,strt,d);

    printtext(930,strt,c1);

    printtext(1010,strt,c2);
    printtext(1090,strt,c3);

}
void final_output(int month,int c1,int c2,int c3)
{
    settextstyle(3,7,2);



    int dif=30;
    double x;

    int xx=820;
    int strt=380;
    int strtx=xx+320;

    outtextxy(xx,strt,"Total Ordering Cost : ");
    printtext(strtx,strt,c1);
    delay(1000);
    strt+=dif;
    outtextxy(xx,strt,"Total Holding Cost : ");
    printtext(strtx,strt,c2);
    delay(1000);
    strt+=dif;
    outtextxy(xx,strt,"Total Backlog Cost : ");
    printtext(strtx,strt,c3);
    delay(1000);
    strt+=dif;

    outtextxy(xx,strt,"Average ordering cost per month : ");
    x=(double)c1/month;
    printfloat(strtx,strt,x);
    delay(1000);
    strt+=dif;

    outtextxy(xx,strt,"Average Holding cost per month : ");
    x=(double)c2/month;
    printfloat(strtx,strt,x);
    delay(1000);
    strt+=dif;

    outtextxy(xx,strt,"Average Backlog cost per month : ");
    x=(double)c3/month;
    printfloat(strtx,strt,x);
}
void finish(int d)
{
    setcolor(RED);
    int strt=90+(d/5)*20+25;
    for(int i=810;i<=1180;i+=2)
    {
        circle(i,strt,2);
        delay(1);
    }
    delay(1000);
    settextstyle(3,VERT_DIR,5);
    //outtextxy(900,strt+20,"Finished");
    delay(1000);
    settextstyle(3,VERT_DIR,3);
    setcolor(WHITE);
}
void graph(int x,int lvl)
{
    int y=430;
    int strt=30;
    int yy;
    setcolor(RED);
    if (lvl>0){
            yy=y-abs(lvl)*5;
            setcolor(GREEN);
    }
    else yy=y+abs(lvl)*10;
    for(int i=strt+x*5;i<=strt+x*5+25;i++)
    {
        line(i,y,i,yy);

    }


}
void simulation()
{
    design();
    vector<int> v = getValues();

    int S=v[0];
    int s=v[1];
    int month=v[2];
    int hc=v[3];
    int bc=v[4];
    int lvl=v[5];
    int sc=v[6];
    int ic=v[7];
    int order=month*2;

    header();
    footer(S,s,hc,bc,sc,ic,lvl);
    right();
    setcolor(BLACK);
    line(545,300,655,300);
    setcolor(WHITE);
    printlvl(lvl);
    showgraph(lvl,0);
    double prelvl=lvl;
    delay(1000);
    int j=-1;
    int c1=0,c2=0,c3=0;
    setcolor(WHITE);
    print_details(0,c1,c2,c3);
    graph(0,lvl);
    for(int i=5;i<=month*30;i+=5)
    {
        if(lvl>=0)
        {
            c2+=5*lvl;
        }
        else
        {
            c3+=5*abs(lvl);
        }
        clk(i);
        int dmd=demand();
        if(i==j)
        {
            lvl+=order;
            ordercome();
            showgraph(lvl,prelvl);
            prelvl=lvl;
            delay(1000);
        }
        lvl-=dmd;
        for(int j=0;j<5;j++)graph(i,lvl);
        showgraph(lvl,prelvl);
        printlvl(lvl);

        delay(1000);
        prelvl=lvl;

        if(lvl<s and i>=j)
        {
           order=S-lvl;
           c1 +=order*ic+sc;
           j=i+15;
           orderplaced();
        }
        print_details(i,c1,c2,c3);
    }
    finish(month*30);
    final_output(month,c1,c2*hc,c3*bc);


}
int main()
{
    initwindow(1200,600);
    setbkcolor(3);
    cleardevice();
    simulation();
    getch();
}
