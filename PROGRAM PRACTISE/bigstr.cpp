#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
      char str[100],bigstr[100];
      int i,j,;
      for(i=0;;i++)
{
      printf("Enter your string:");
      gets(str);
      if(strcmp(str,"quit")==0)
      break;
      strcat(bigstr,str);      
}
     
      printf(bigstr);                  
      getch();
}
