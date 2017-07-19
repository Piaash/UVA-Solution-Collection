#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
main()
{
      char str[100];
      int i;
      printf("Write something:");
      gets(str);
      for(i=0;i<strlen(str);i++)
      printf("%c",toupper(str[i]));
      for(i=0;i<strlen(str);i++)
      printf("%c",tolower(str[i]));
      getch();
}
