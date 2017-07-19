#include<stdio.h>
#include<math.h>
//n^(1/3)=a+dx;
//dx=(n-a^3)/(3*a^2);
main()
{
    double a;
    while(scanf("%lf",&a)==1 && a!=0)
    {
        printf("%.4lf\n",pow(a,1.0/3));
    }
    return 0;
}
