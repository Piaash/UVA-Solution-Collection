#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
      char pass[]="piaash";
      char input[100];
      int i;
      for(i=0;i<3;i++)
{      
      printf("Enter Password:");
      gets(input);
      if(!strcmp(pass,input))
{     
      printf("Log On Successful."); 
      break;
}      
      else 
      printf("Wrong Password.\n");
      if(i==3)
      printf("Access Denied.");
    
}
     
     
      getch();
}
