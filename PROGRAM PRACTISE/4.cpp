#include<stdio.h>
#include<conio.h>
main()
{
int b,n,counter=1,j;

n=100;
for(j=1;j<=n;j++)
{
b=n%j;
if(b==0)
{
counter++;
}
}
printf("%d ",counter);
getch();

}
