#include<stdio.h>
#include<math.h>
main()
{
    int t,i;
    long v,u;
    double time,path,d;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %ld %ld",&d,&v,&u);
        if(v==0 || u==0 || v>=u)
        printf("Case %d: can't determine\n",i);
        else
        {
        time=d/u;
        path=d/sqrt((u*u)-(v*v));
        printf("Case %d: %.3lf\n",i,fabs(path-time));
        }
    }
    return 0;
}
