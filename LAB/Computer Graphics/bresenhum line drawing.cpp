#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
    int gd = DETECT ,gm, i;


    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setbkcolor(WHITE);
    int x0 = 100 , y0 = 200, x1 = 500, y1 = 300;
    int dx, dy, p, x, y;

    dx=x1-x0;
    dy=y1-y0;

    x=x0;
    y=y0;

    p=2*dy-dx;
    while(x<x1)
    {
        if(p<0)
        {
            putpixel(x,y,RED);
            p=p+2*dy;

        }
        else
        {
            putpixel(x,y,RED);
            p=p+2*dy-2*dx;
            y++;
        }
        x++;
    }
    getch();
    closegraph();
}
