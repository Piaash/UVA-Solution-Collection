#include<stdio.h>
#include<math.h>
main()
{
    double a,b,c,s,i,r,sunflower,violet,rose,triangle,pi;
    pi=2*acos(0.0);
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2.0;
        r=sqrt(s*(s-a)*(s-b)*(s-c))/s;
        triangle=sqrt(s*(s-a)*(s-b)*(s-c));
        rose=pi*r*r;
        violet=triangle-rose;
        sunflower=pi*(a*b*c/4.0/triangle)*(a*b*c/4.0/triangle)-triangle;
        printf("%.4lf %.4lf %.4lf\n",sunflower,violet,rose);
    }
    return 0;
}
