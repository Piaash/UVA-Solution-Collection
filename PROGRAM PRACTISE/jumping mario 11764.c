#include<stdio.h>
main()
{
    int t,n,a[100],c,d,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        c=0;
        d=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=1;j<n;j++)
        {
            if(a[j]>a[j-1])
            c++;
            else if(a[j-1]>a[j])
            d++;
        }
        printf("Case %d: %d %d\n",i,c,d);
    }
    return 0;
}
