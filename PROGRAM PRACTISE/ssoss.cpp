#include<stdio.h>
#include<conio.h>
main()
{
      int i;
      for(i=1;i<26;i++)
{    
      if(i==13)
{  
      printf("O ");        
}      
      else
{
      printf("S ");
      if(!(i%5))
      printf("\n"); 
}                  
}            
      getch();
}
