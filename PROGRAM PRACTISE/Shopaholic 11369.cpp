
#include<cstdio>
#include<algorithm>

    main()
    {
        int cases, i;
        scanf("%d",&cases);
        while(cases--)
        {
            int arrayLength ;
            scanf("%d",&arrayLength);
            int array[arrayLength];
            for(i = 0 ; i < arrayLength ; i++)
            {
                scanf("%d",&array[i]);
            }
            std::sort(array,array + sizeof(array) / sizeof(array[0]));
            int discount = 0;
            for(i = arrayLength - 3 ; i >= 0 ; i -= 3)
            {
                discount += array[i];
            }
            printf("%d\n",discount);
        }
        return 0;
    }
