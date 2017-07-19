
#include<stdio.h>

main()
{
    long long input;
    while(scanf("%lld",&input) == 1)
    {
        if(input != 1)
        {
            printf("%lld\n",3 * ((2 * ((input / 2) + 1) * ((input / 2) + 1)) - 3));
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}
