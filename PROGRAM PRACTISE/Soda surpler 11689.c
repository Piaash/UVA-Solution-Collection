#include<stdio.h>
main()
{
    int t,i,a,b,c,d,sum,j,e,f;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum=0;
        scanf("%d %d %d",&a,&b,&c);
        if(a<0 || b<0 || c<2)
        continue;
        d=a+b;
        for(j=0;;j++)
        {
            e=d/c;
            f=d%c;
            sum=sum+e;
            d=e+f;
            if(d<c)
            {
             break;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
