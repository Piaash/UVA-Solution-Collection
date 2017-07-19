#include<stdio.h>

    main()
    {
        int cases;
        scanf("%d",&cases);
        while(cases--)
        {
            int numberOfShops,i,j;
            scanf("%d",&numberOfShops);
            int array[numberOfShops];
            for(i =0;i < numberOfShops; i++)
            {
                scanf("%d",&array[i]);
            }
            int maximum = array[0],minimum = array[0];
            for(j = 0; j < numberOfShops - 1; j++)
            {
                maximum = max(maximum, array[j + 1]);
                minimum = min(minimum, array[j + 1]);
            }
            printf( "%d",(maximum - minimum) * 2);
        }
        return 0;
    }

