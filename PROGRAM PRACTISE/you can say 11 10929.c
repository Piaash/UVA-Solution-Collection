#include<stdio.h>
main()
{
    int a;
    while(scanf("%lld",&a)==1 && a!=0)
    {
        if(a%11==0)
        printf("%d is a multiple of 11.\n",a);
        else if(a%11!=0)
        printf("%d is not a multiple of 11.\n",a);
    }
    return 0;
}
