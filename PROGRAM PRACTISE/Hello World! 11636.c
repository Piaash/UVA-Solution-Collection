#include<stdio.h>
main()
{
    int a,i=0,c,p,n;
    while(scanf("%d",&a)==1 && a>=0)
    {
        i++;
        if(a==1)
        printf("Case %d: 0\n",i);
        else
        {
        p=1;
        c=0;
        while(1)
        {
        p=p*2;
        if(p>=a)
        {
            c++;
            break;
        }
        else
        c++;
        }
        printf("Case %d: %d\n",i,c);
        }
    }
    return 0;
}
