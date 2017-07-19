
#include<stdio.h>

    main()
    {
        long long caseCount = 0;
        long long start,limit;
        while(scanf("%lld %lld",&start,&limit) == 2)
        {
            if(start < 0 && limit < 0)
            {
                return 0;
            }
            long long numberOfTerms = 0;
            long long calculation = start;
            if(calculation == 1)
            {
                numberOfTerms = 1;
            }
            else
            {
            while(1)
            {
                numberOfTerms++;
                if(calculation % 2 == 0)
                {
                    calculation /= 2;
                    if(calculation == 1)
                    {
                        numberOfTerms++;
                        break;
                    }
                }
                else
                {
                    calculation = (calculation * 3) + 1;
                    if(calculation > limit)
                    {
                        break;
                    }
                }
            }
            }
            caseCount++;
            printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",caseCount,start,limit,numberOfTerms);
        }
        return 0;
    }
