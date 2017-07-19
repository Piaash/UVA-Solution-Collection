#include<stdio.h>
#include<math.h>
main()
{
    long long a,b,c;
    while(scanf("%lld",&a)==1 && a!=0)
    {
        b=(int)sqrt(a);
        c=b*b;
        if(a==c)
        printf("yes\n");
        else
        printf("no\n");

    }
}
