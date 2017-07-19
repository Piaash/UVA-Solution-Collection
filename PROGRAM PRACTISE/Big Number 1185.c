#include<stdio.h>
main()
{
    int t,j;
    long n;
    double sum;
    scanf("%d",&t);
    while(t--)
    {
        sum=0.0;
        scanf("%d",&n);
        if(n==1)
        printf("1\n");
        else
        {
            for(j=1;j<=n;j++)
            {
                sum+=log10(j);
            }
            printf("%.0f\n",ceil(sum));
        }
    }
    return 0;
}
