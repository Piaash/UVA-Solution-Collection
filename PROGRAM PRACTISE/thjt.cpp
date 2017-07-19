#include<stdio.h>
#include<conio.h>
main()
{
      int a[3][3];
      int i,j;
      for(i=0;i<3;i++)
        
          for(j=0;j<3;j++)
            
              a[i][j]=i*j;
            for(i=0;i<3;i++)
                { for(j=0;j<3;j++)
                 printf("%d",a[i][j]);
                 printf("\n");
               
             
        }
      
      getch();
      return 0;
      
}
