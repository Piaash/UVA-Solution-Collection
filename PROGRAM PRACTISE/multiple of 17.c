#include<stdio.h>
main()
{
    long long a;
    while(scanf("%lld",&a)==1 && a!=0)
    {
        if(a%17==0)
        printf("1\n");
        else if(a%17!=0)
        printf("0\n");
    }
    return 0;
}
