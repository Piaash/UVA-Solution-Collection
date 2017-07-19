#include<stdio.h>
#include<conio.h>
main()
{
      char s1[20],s2[20],s3[20];
      printf("Enter your first name:");
      scanf("%s",&s1);
      printf("Enter your middle name:");
      scanf("%s",&s2);
      printf("Enter your last name:");
      scanf("%s",&s3);
      printf("This is your name:\n");
      printf("%s %s %s",s1,s2,s3);
      getch();
}
