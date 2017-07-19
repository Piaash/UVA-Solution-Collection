#include<stdio.h>
#include<conio.h>
main()
{
      int n,i,a=1;
      printf("Enter a number:");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      a=a*i;
      printf("%d",a);
      getch();
}
