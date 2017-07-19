#include<stdio.h>
#include<math.h>
main()
{
    double n,N,s;
    int i;
    for(i=1;;i++)
    {
        scanf("%lf",&N);
        if(N==0)
        return 0;
        s=sqrt(9.0+8.0*N);
        n=(3.0+s)/2;
        printf("Case %d: %.0lf\n",i,ceil(n));
    }
    return 0;
}
