#include<stdio.h>
#include<conio.h>
main()
{
      int match,i[5],j,k;
      printf("Enter 5 numbers:");
      for(j=0;j<5;j++)
{      
      scanf("%d",&i[j]);
}      
      for(j=0;j<10;j++)
{
      match=i[j];
      for(k=j+1;k<10;k++)
      
      if(match==i[k])
      printf("%d has matching",match);
      else
      printf("match not found\n");
      break;
            
}      
      getch();
}
