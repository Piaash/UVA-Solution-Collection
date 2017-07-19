#include<stdio.h>
#include<conio.h>
main()
{
      int i;
      for(i=0;;i++)
{
      if(kbhit())
      break;
      printf(".");
}            
      getch();
}
