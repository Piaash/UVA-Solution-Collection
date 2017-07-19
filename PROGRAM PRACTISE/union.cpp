#include<stdio.h>
#include<conio.h>
union item
{
      int x;
      char c;
      float f;
}i;      
main()
{
      i.x=10;
      i.f=5.66;
      printf("%f ",i.f);
      printf("%d",i.x);
      getch();
}
