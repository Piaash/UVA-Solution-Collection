
#include<stdio.h>

    main()
    {
        int number;
        while(scanf("%d",&number) == 1)
        {
            int sequenceOfOnes = 1;
            int count = 0;
            while(1)
            {
                int remainder = sequenceOfOnes % number;
            if(remainder == 0)
            {
                printf("%d\n",count + 1);
                break;
            }
                sequenceOfOnes =  (remainder  * 10) + 1;
                count++;
            }
        }
        return 0;
    }

