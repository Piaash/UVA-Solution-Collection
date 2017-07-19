#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
      char str[100];
      int i;
      printf("Enter your string:");
      gets(str);
      for(i=strlen(str)-1;i>=0;i--)
{
      printf("%c",str[i]);
}            
      getch();
}
