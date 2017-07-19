#include<stdio.h>
main()
{
    unsigned long long i;
    unsigned long long j;
    char c;
    while(scanf("%llu %c %llu",&i,&c,&j)==3)
    {
        if(c=='/')
        printf("%llu\n",i/j);
        else if(c=='%')
        printf("%llu\n",i%j);
    }
    return 0;
}
