#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
      char input[100];
      int i;
      gets(input);
      strlen(input);
      printf("%d",strlen(input));
      for(i=0;i<strlen(input);i++)
{
      if(i=0,4,8,12)
{
      input[i]=input[i]+2;
}
      if(i=2,6,10,14)
{
      input[i]=input[i]-2;
}
}
      printf("%s",input);
      getch();
}      
                        
      






