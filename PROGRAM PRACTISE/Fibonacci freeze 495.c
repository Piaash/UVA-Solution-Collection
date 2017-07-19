#include<stdio.h>
main()
{
    int n,t,x,y,i;
    while(scanf("%d",&t)==1)
    {
        x=0;
        y=1;
        for(i=0;i<t-1;i++)
        {
            n=x+y;
            x=y;
            y=n;
        }
        printf("The Fibonacci number for %d is %d\n",t,n);
    }
    return 0;
}

