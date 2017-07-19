#include<stdio.h>
#include<conio.h>
int convert();
main()
{
      int ans;
      ans=convert();
      printf("%d",ans);
      getch();
     
}
int convert()
{        
         int dollar,pound;
         printf("enter dollars:");
         scanf("%d",&dollar);
         pound=dollar*2;
         return pound;
   
}           








      
