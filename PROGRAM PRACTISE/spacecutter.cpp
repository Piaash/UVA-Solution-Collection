#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
      char str[100];
      int i;
      printf("Enter a string:");
      gets(str);
      for(i=0;i<strlen(str);i++)
{      
      if(str[i]==' ')
      continue;
      printf("%c",str[i]);
}      
      getch();
}
