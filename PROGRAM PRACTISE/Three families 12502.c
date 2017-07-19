#include <stdio.h>
main()
{
    int a,b,c,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        printf("%d\n",c*(2*a-b)/(a+b));
    }
    return 0;
}
