#include<stdio.h>
main()
{
    int i,j,k,t,n,a[100],m=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        m=a[0];
        for(k=1;k<n;k++)
        {
            if(m<a[k])
            m=a[k];
        }
        printf("Case %d: %d\n",i+1,m);
    }
    return 0;
}
