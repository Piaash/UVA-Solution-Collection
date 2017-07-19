#include<stdio.h>
main()
{
    int t,n,i,k,p,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&n,&k,&p);
        for(j=1;j<=p;j++)
        {
            k++;
            if(k==n+1)
            k=1;
        }
        printf("Case %d: %d\n",i,k);
    }
    return 0;
}
