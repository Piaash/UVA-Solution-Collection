#include<stdio.h>
#include<conio.h>
int fact(int a);
main()
{
      int s=1;
      s=s*fact();
      printf("%d",s);
      getch();
}
int fact(int a)
{
    int n,i;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    printf("%d",i);
    return i;
}    
