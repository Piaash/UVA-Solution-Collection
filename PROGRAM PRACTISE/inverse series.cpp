#include<stdio.h>
#include<conio.h>
main()
{
      int n;
      float i,sum=0.0;
      printf("Enter the value of n:");
      scanf("%i",&n);
      for(i=1.0;i<=n;i++)
{
      sum=sum+(1/i);
}
      printf("%.2f",sum);      
      getch();
}
