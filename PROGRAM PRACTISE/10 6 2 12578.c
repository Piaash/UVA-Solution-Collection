#include<stdio.h>
main()
{
    double length,width,radius,pi=2*acos(0.0);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf",&length);
        width=(length/10.0)*6.0;
        radius=(length/10.0)*2.0;
        printf("%.2f %.2f\n",radius*radius*pi,(length*width)-(radius*radius*pi));
    }
    return 0;
}
