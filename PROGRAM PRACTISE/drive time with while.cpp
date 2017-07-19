#include<stdio.h>
#include<conio.h>
main()
{
      float s,v,i,n;
      i=0;
      printf("How many times?");
      scanf("%d",n);
      while(i<n)
{
      printf("Distance:");
      scanf("%f",&s);
      printf("Average speed:");
      scanf("%f",&v);
      printf("Time:%d",s/v);
      i++;
}            
      getch();
}
