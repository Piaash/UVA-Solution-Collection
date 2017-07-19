#include<stdio.h>
#include<math.h>
main()
{
    double r,u,v,w;
    while(scanf("%lf %lf %lf",&u,&v,&w)==3)
    {
        r=sqrt((2*((u*u*v*v)+(v*v*w*w)+(w*w*u*u)))-((u*u*u*u)+(v*v*v*v)+(w*w*w*w)))/3;
        if(r>0)
        printf("%.3lf\n",r);
        else
        printf("-1.000\n");
    }
    return 0;
}
