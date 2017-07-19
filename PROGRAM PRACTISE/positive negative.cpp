#include<stdio.h>
#include<conio.h>
main()
{
      int n;
      printf("Enter your number:");
      scanf("%d",&n);
      if(n>0)
      printf("positive");
      else if(n==0)
      printf("zero");
      else if(n<0)
      printf("negative");
      getch();
}
