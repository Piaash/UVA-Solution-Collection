#include<stdio.h>
#include<math.h>
#define pi 2*acos(0)
main()
{
    int i=0;
    double n,area,area1,area2;
    while(scanf("%lf %lf",&n,&area)!=EOF)
    {
        if(n<3)
        break;
        area1=pi*(area/(n*tan(pi/n)));
        area2=pi*2*area/(n*sin(2*pi/n));
        printf("Case %d: %.5lf %.5lf\n",++i,area2-area,area-area1);
    }
    return 0;
}
