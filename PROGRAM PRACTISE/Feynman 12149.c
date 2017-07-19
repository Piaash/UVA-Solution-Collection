#include<stdio.h>
main()
{
    int i,n,j,sum;
    while((scanf("%d",&n)==1)&&n!=0)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            j=i*i;
            sum=sum+j;
        }
        printf("%d\n",sum);
    }
    return 0;
}
