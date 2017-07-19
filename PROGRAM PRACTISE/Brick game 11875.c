
#include<stdio.h>

    main()
    {
        int cases,i,j;
        scanf("%d",&cases);
        for(i = 0; i < cases; i++)
        {
            int arrayLength;
            scanf("%d",&arrayLength);
            int array[12];
            for(j = 0; j < arrayLength; j++)
            {
                scanf("%d",&array[j]);
            }
            printf("Case %d: %d\n", i + 1,array[arrayLength / 2]);
        }
        return 0;
    }

