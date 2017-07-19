#include<stdio.h>
#include<conio.h>
main()
{
      int a[5],i,b,n;
      scanf("%d %d",&n,&b);
      for(i=0;i<n;i++)
{
      scanf("%d",&a[i]);
}
      for(i=0;i<n;i++)
{
      if(n==a[i])
{    

      printf("found at position %d",a[i]);
}
      if(i==b)
{
      printf("not found");
}
}                              





getch();


      }
