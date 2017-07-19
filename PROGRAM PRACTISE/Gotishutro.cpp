#include<stdio.h>
#include <math.h>
int main()
{
    int  j,i=1;
    double u,v,t,a,s;
    while (scanf("%d",&j)&&j!=0)
{    
        switch (j)
{
        case 1:
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",i,s,a);
            break;
        case 2:
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",i,s,t);
            break;
        case 3:
            scanf("%lf %lf %lf",&u,&a,&s);
            t=(sqrt(u*u+2.0*s*a)-u)/a;
            v=u+a*t;
            printf("Case %d: %.3lf %.3lf\n",i,v,t);
            break;
        case 4:
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt(v*v-2.0*s*a);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,u,t);
            break;
}
        i++;
}
        return 0;
}
