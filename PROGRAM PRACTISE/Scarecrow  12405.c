
#include<stdio.h>

    main()
    {
        int cases , i, j;
        scanf("%d", &cases);
        for(i = 1 ; i <= cases ; i++)
        {
            int cropFieldLength;
            scanf("%d",&cropFieldLength);
            getchar();
            char cropField[cropFieldLength];
            gets(cropField);
            int count = 0;
            for( j = 0 ; j < cropFieldLength;)
            {
                if(cropField[j] == '#')
                {
                    j++;
                }
                else
                {
                    count++;
                    j += 3;
                }
            }
            printf("Case %d: %d\n",i,count);
        }
        return 0;
    }

