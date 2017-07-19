#include<stdio.h>
main()
{
    int i,j,k,n,a[1000],c,b,sum2,sum;
    for(i=1;;i++)
    {
        sum=0;
        sum2=0;
        scanf("%d",&n);
        if(n==0)
        break;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            sum=sum+a[j];
        }
        c=sum/n;
        for(j=0;j<n;j++)
        {
            if(a[j]>c)
            {
            b=a[j]-c;
            sum2=sum2+b;
            }
        }
        printf("Set #%d\n",i);
        printf("The minimum number of moves is %d.\n\n",sum2);
    }
    return 0;
}
