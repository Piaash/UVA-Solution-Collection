#include<stdio.h>
#include<conio.h>
main()
{
      int a[10][3];
      int i,j;
      for(i=1;i<11;i++)
      for(j=0;j<3;j++)
{
      a[i][j]=i*i*i;
      if(!(j%3))
      printf("\n");
      printf("%d\t",a[i][j]);
}            
      getch();
}
