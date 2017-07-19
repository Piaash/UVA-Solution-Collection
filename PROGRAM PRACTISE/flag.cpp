#include <stdio.h>
#include <conio.h>
#include <graphics.h>
main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI " );
circle(125,150,25);
line(50,100,50,300);
line(50,100,200,100);
line(50,200,200,200);
line(200,100,200,200 );
getch();
closegraph();
return 0;
}
