
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
            String strArray[] = br.readLine().split(" ");
            for(i = 0 ; i < arrayLength ; i++)
            {
                scanf("%d",&arrayLength);
            }
            std::sort(array,array + arrayLength);
            int discount = 0;
            for(i = arrayLength - 3 ; i >= 0 ; i -= 3)
            {
                discount += array[i];
            }
            printf("%d",&discount);
        }
        return 0;
    }
