
#include<stdio.h>

    main()
    {
        long long cases ;
        scanf("%lld",&cases) ;
        while(cases--)
        {
            long long limit ;
            scanf("%lld",&limit) ;
            printf("%lld\n",limit >> 1) ;
        }
        return 0 ;
    }

