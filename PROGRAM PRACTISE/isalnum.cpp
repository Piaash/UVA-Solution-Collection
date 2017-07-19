#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
      char ch;
      ch=getchar();
      if(isalnum(ch))
      printf("ch is alphanumerical.");
      else
      printf("ch is not alphanumerical.");
                  
      getch();
}
