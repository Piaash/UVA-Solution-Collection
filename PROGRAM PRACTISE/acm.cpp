#include<stdio.h>
main()
{
   int a,n,sum,b,c,i;
   while(scanf("%d",&a)==1)
   {
       sum=a;
   for(i=0;;i++)
   {
       b=a/3;
       c=a%3;
       a=b+c;
       if(c==1 && b==0)
       {
       sum=sum+1;
       break;
       }
       else if(c==2 &&b==0)
       {
           sum=sum+2;
           break;

       }
       else if(c==0)
       {
           break;
       }
       else
       sum=sum+b+c;
   }
   printf("%d\n",sum);
   }
}
