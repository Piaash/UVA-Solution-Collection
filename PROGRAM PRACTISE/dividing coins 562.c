#include<stdio.h>
main()
{
    int i,n,c,j,sum,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=0;
        scanf("%d",&c);
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[j]);
            sum=sum+a[j];
        }
        printf("%d\n",);
    }
    return 0;
}
