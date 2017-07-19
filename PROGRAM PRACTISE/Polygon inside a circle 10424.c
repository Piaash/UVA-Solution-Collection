#include<stdio.h>
#include<math.h>
#define pi 2*acos(0)
main()
{
    double a,r,n;
    while(scanf("%lf %lf",&r,&n)==2)
    {
        a=r*r*(sin(2.0*pi/n))/2;
        printf("%.3lf\n",n*a);
    }
    return 0;
}
