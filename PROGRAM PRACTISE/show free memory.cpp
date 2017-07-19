#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      char *p;
      long l;
      l=0;
      do{
          p=malloc(1000);
          if(p) l+=1000;
          }while(p);
     printf("approximately %ld bytes of free memory",l);     
          
      getch();
}
