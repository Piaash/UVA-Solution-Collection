#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      char ch;
      int i;
      printf("This program will be terminated if you type 'Q'.\n");
      for(i=0;i<10;i++)
{
      ch=getche();
      if(ch=='Q')
      exit(0);
      else printf("\nType again.\n");
      if(i==9)
      printf("time up.");
}            
      getch();
}
