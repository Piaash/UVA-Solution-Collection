#include<stdio.h>
main()
{
    int a,b,i,j,sum,count,t;
    while(scanf("%d %d",&a,&b)==2)
    {
    printf("%d %d",a,b);
    if(a>b)
    {
        t=b;
        b=a;
        a=t;
    }
        sum=0;
        for(i=a;i<=b;i++)
        {
            count=1;
            for(j=i;j!=1;j=j)
            {
                if(j%2==0)
                j=j/2;
                else
                j=(3*j)+1;
                count++;
            }
            if(count>=sum)
            sum=count;
        }
        printf(" %d\n",sum);
    }
    return 0;
}
