#include<stdio.h>
main()
{
int n,a,b,count,c;
while(scanf("%d %d",&a,&b)==2&&a!=0||b!=0)
{
count=0,c=0;
while(a||b)
{
c=(a%10+b%10+c)/10;
a=a/10;
b=b/10;
count=count+c;
}
if(count==0)
printf("No carry operation.\n");
else if(count==1)
printf("1 carry operation.\n");
else printf("%d carry operations.\n",count);
}
return 0;
}
