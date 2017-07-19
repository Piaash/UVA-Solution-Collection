#include<stdio.h>
#include<conio.h>
int rstrlen(int i);
main()
{
      rstrlen(0);
      getch();
}
int rstrlen(int i)
{
      char str[100];
      int count=0;
      printf("Enter a string:");
      gets(str);
      for(;i!='\0';)
      count++;
      printf("%d",count);
}         
