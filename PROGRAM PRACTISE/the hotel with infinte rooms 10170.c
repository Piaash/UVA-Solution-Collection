
#include<stdio.h>

    main()
    {
        int start;
        long long limit;
        while(scanf("%d %lld",&start,&limit) == 2)
        {
            long long ans,sum = 0;
            for(ans = start; sum < limit ; ans++)
            {
                sum += ans;
            }
            printf("%lld\n",ans - 1);
        }
        return 0;
    }

