#include<stdio.h>
#include<conio.h>
main()
{
      int i,marks[5],sum=0;
      float average;
    
      for(i=0;i<5;i++)
{
      scanf("%d",&marks[i]);
      sum=marks[i]+sum;
}
      average=sum/5;
      printf("average=%f",average);      
      





getch();


      }
