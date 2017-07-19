#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
      char a[100],b[100];
      int i;
      gets(a);
      gets(b);
      if(strlen(a)>strlen(b))
{
      for(i=0;i<strlen(a);i++)
{
      printf("%s %s\n",a,b);
}
}
      else
{
      for(i=0;i<strlen(b);i++)
{
      printf("%s %s\n",a,b);
}



}     
getch();


      }
