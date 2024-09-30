#include <graphics.h>
#include<iostream>
#include <conio.h>

using namespace std;

//circle
void  draw(int xc,int yc,int x,int y)
{
    putpixel(x+xc,y+yc,RED);
    putpixel(x+xc,-y+yc,YELLOW);
    putpixel(-x+xc,-y+yc,GREEN);
    putpixel(-x+xc,y+yc,YELLOW);
    putpixel(y+xc,x+yc,12);
    putpixel(y+xc,-x+yc,14);
    putpixel(-y+xc,-x+yc,15);
    putpixel(-y+xc,x+yc,6);
}

void BresenhamCircle(int xc,int yc,int r)
{

}

int  main()
{

    int xc,yc,r,gd = DETECT ,gm, i;;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    /*cout<<"Enter the values of xc and yc :";
    cin>>xc>>yc;

    cout<<"Enter the value of radius  :";
    cin>>r;*/

    xc=200, yc=200,r=150;
    int x=0,y=r;
    int d=3-(2*r);
    draw(xc,yc,x,y);

    while(x<=y)
    {
        if(d<=0) d=d+(4*x)+6;
        else
        {
            d=d+(4*x)-(4*y)+10;
            y--;
        }
        x++;
        draw(xc,yc,x,y);
    }

    getch();
    closegraph();
    return 0;
}
