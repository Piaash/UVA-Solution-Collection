#include<stdio.h>
#include<conio.h>
main()
{
      int i,*p;
      p=&i;
      for(i=0;i<10;i++)
      printf("%d ",*p);
      getch();
}
