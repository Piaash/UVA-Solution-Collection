#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(void)
{
      char *p;
      p=malloc(80);
      if(!p)
{
      printf("Allocation error.");
      exit(1);
}
      printf("Enter a string: ");
      gets(p);
      printf(p);
      free(p);      
      getch();
}
