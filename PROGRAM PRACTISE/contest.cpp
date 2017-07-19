#include<stdio.h>

    main()
    {
        long long limit,position ;
        scanf("%lld %lld",&limit,&position);
        long long median = limit / 2;
        if(limit % 2 != 0)
        {
            median += 1;
        }
        if(position <= median)
        {
            long long j = 1;
            long long i;
            for( i =  0 ; i < position - 1 ; i++, j = j + 2)
            {

            }
            printf("%lld\n",j);
        }
        else
        {
            long long j = 2;
            long long i;
            for( i =  0 ; i < position - 1 - median; i++, j = j + 2)
            {

            }
            printf("%lld\n",j);
        }
        return 0;

    }

