#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      char str1[80],str2[80];
      printf("Enter first:");
      gets(str1);
      printf("Enter second:");
      gets(str2);
      printf("the sum is %d",atoi(str1)+atoi(str2));
      getch();
}
