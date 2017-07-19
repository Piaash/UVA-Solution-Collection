#include<stdio.h>
main()
{
    int t;
    double Ax,Ay,Bx,By,Cx,Cy;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&Ax,&Ay,&Bx,&By,&Cx,&Cy);
        printf("%.0lf\n",(Ax*(By-Cy)+Bx*(Cy-Ay)+Cx*(Ay-By))/14);
    }
}
