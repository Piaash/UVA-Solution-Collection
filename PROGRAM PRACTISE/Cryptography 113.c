#include<stdio.h>
#include<math.h>
main()
{
    double x,y;
    while(scanf("%lf %lf",&x,&y)==2)
    {
            printf("%.0f\n",pow(y,1/x));
    }
    return 0;
}
