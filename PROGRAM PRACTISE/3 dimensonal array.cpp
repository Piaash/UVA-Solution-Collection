#include<stdio.h>
#include<conio.h>
main()
{
      int i,j,k,a[3][3][3];
      for(i=0;i<3;i++)
      for(j=0;j<3;j++)
      for(k=0;k<3;k++)
{
      a[i][j][k]=(i+1)*(j+1)*(k+1);
      
      printf("%d ",a[i][j][k]);
}            
      getch();
}
