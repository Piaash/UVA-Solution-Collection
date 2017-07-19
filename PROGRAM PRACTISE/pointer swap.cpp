#include<stdio.h>
#include<conio.h>
void interchange(int *a,int *b)
{
                int t=*a;
                *a=*b;
                *b=t;
}                
main()
{
      int a=5;int b=10;
      interchange(&a,&b);
      printf("%d %d",a,b);
      





getch();


      }
