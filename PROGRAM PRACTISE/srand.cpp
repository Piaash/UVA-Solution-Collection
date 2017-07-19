#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      int i;
      unsigned u;
      scanf("%u",&u);
      srand(u);
      for(i=0;i<10;i++)
      printf("%d ",rand());
      getch();
}
