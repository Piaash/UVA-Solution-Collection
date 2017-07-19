#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
       char name[20];
       int roll;
       float cgpa;
       char address[20];
}s[60];       
 main(void)
{
      int i;
      for(i=0;i<5;i++)
{
      printf("roll number:");
      scanf("%i\n",&s[i].roll);
      printf("roll:%i\n",s[i].roll);
      gets(s[i].name);
      printf("name:%s\n",s[i].name);
      printf("what is the cgpa? ");
      scanf("%f\n",&s[i].cgpa);
      printf("cgpa:%f\n",s[i].cgpa);
      gets(s[i].address);
      printf("address:%s\n",s[i].address);
}            
      getch();
}
