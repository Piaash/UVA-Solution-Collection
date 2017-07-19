#include<stdio.h>
main()
{
   int t,i;
   double radius;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
       scanf("%lf",&radius);
       printf("Case %d:\n",i);
       printf("%.0lf %.0lf\n",-2.25*radius,1.5*radius);
       printf("%.0lf %.0lf\n",2.75*radius,1.5*radius);
       printf("%.0lf %.0lf\n",2.75*radius,-1.5*radius);
       printf("%.0lf %.0lf\n",-2.25*radius,-1.5*radius);
   }
   return 0;
}
