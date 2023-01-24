#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int i,j=0;gd=DETECT,gm;
    intgraph(&gd,&gm,"c:\\TC\\BGI");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    getch();
    setviewport(0,00,639.440,1)
    for(i=0;i<=240;i=i+10,j)
    {

        rectangle(50+i,275,150+i,400);
        rectangle(150+i,350,200+i,400);
        circle(75+i,410,10);
        circle(175+i,410,10);
        setcolor(j);
        delay(100);
        if(i==420)
          break;
          clearviewport();

    }
    return 0;
}