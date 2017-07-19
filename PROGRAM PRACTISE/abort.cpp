#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      char ch;
      int i;
      printf("This program will be terminated if you type 'A'.\n");
      for(i=0;i<10;i++)
{
      ch=getche();
      if(ch=='A')
      abort();
      else printf("\nType again.\n");
      if(i==9)
      printf("time up.");
}            
      getch();
}
