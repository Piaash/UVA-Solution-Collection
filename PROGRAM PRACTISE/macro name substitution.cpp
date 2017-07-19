#include<stdio.h>
#include<conio.h>
#define COUNTBY 2
#define MAX 100
main()
{
      int i;
      for(i=0;i<MAX;i++)
{
      if(!(i%2))
      printf("%d\t\t",i);
}            
      getch();
}
