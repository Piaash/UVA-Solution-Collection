#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
      char str1[10],str2[10];
      printf("Enter first string:");
      gets(str1);
      printf("Enter second string:");
      gets(str2);
      printf("string length:%d&%d\n",strlen(str1),strlen(str2));
      printf("comparision:%d\n",strcmp(str1,str2));
      printf("add:%s\n",strcat(str1,str2));
      printf("copy:%s\n",strcpy(str1,str2));
      
      getch();
}
