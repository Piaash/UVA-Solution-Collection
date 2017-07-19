#include<stdio.h>
#include<math.h>
main()
{
    double a,b,c,r;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        r=(a+b+c)/2;
        if(r)
        printf("The radius of the round table is: %.3lf\n",sqrt(((r-a)*(r-b)*(r-c))/r));
        else
        printf("The radius of the round table is: 0.000\n");
    }
    return 0;
}
