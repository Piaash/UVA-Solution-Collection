#include<stdio.h>
#include<math.h>
main()
{
    double D,V,d,pi;
    pi=2*acos(0.0);
    while(scanf("%lf %lf",&D,&V)==2&&(D!=0||V!=0))
    {
        d=pow((D*D*D-(6.0*V)/pi),1/3.0);
        printf("%.3lf\n",d);
    }
    return 0;
}
