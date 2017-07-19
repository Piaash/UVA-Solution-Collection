#include<stdio.h>
main()
{
    int t,n,a[2000],i,j,sum1,sum2;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum1=0;
        sum2=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<n;j++)
        {
            sum1=sum1+(a[j]/30)+1;
        }
        sum1=sum1*10;
        for(j=0;j<n;j++)
        {
            sum2=sum2+(a[j]/60)+1;
        }
        sum2=sum2*15;
        if(sum1>sum2)
        printf("Case %d: Juice %d\n",i,sum2);
        else if(sum2>sum1)
        printf("Case %d: Mile %d\n",i,sum1);
        else if(sum1==sum2)
        printf("Case %d: Mile Juice %d\n",i,sum1);
    }
    return 0;
}
