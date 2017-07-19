#include<stdio.h>
main()
{
    int i,t,n,rev,j,flag1,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        rev=0;
        for(i=1;;i++)
        {
            flag1=n;
        while(n>0)
        {
            rev=rev*10+n%10;
            n=n/10;
        }
        printf("%d\n",rev);
        if(rev==flag1)
        {
            printf("%d %d\n",i,rev);
            break;
        }
        else
        n=rev+flag1;
        }
    }
    return 0;
}
