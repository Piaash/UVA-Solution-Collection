#include<stdio.h>
#include<conio.h>
main()
{
      int i,j,n;
      scanf("%d",&n);
      for(i=1;i<n;i++)
{
      for(j=1;j<=i;j++)
{
      printf("%i",j);  
}    
      printf("\n");
}                
      getch();
}
