#include<stdio.h>
#include<conio.h>
main()
{
      float s,v,i,n;
      printf("How many times?");
      scanf("%d",&n);
      while(n)
{
      printf("Distance:");
      scanf("%f",&s);
      printf("Average speed:");
      scanf("%f",&v);
      printf("Time:%f",s/v);
      n--;     
}            
      getch();
}
