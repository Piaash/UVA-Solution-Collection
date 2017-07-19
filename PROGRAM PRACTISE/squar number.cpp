#include<stdio.h>
#include<conio.h>
main()
{
      int i,j,k,l,m,n;
      scanf("%d %d",&i,&j);
      for(k=i,l=1;k<=j,l<k;k++,l++)
{
      m=(k*k)/l;
      if(k!=m)
{      
      continue;
}
     else
     n++;
}
      printf("%d",n);            
      getch();
}
