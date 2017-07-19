#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)
main()
{
   int i,t,l,d;
   double result,a,b;
   scanf("%d",&t);
   for(i=0;i<t;i++)
   {
       scanf("%d %d",&d,&l);
       a=l/2.0;
       b=sqrt((l/2.0)*(l/2.0)-(d/2.0)*(d/2.0));
       result=pi*a*b;
       printf("%.3lf\n",result);
   }
   return 0;
}
