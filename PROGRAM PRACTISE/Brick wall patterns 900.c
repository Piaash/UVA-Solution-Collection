#include<stdio.h>
main()
{
    int n,t,x,y,i;
    while(scanf("%d",&t)==1 && t!=0)
    {
        x=0;
        y=1;
        for(i=0;i<t;i++)
        {
            n=x+y;
            x=y;
            y=n;
        }
        printf("%d\n",n);
    }
    return 0;
}
