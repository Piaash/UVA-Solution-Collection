#include<stdio.h>
#include<conio.h>
main()
{
      int i,j,n,sum=0;
      scanf("%i",&n);
      for(i=0;i<=n;i++)
{      
      for(j=2;j<=n;j++)
{
      if(i%j)
      continue;
      sum=sum+i;
      printf("%i ",sum);
}
}            
      getch();
}
