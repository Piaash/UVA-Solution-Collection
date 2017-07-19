
#include<stdio.h>

    main()
    {
        int arrayLength,cases,l;
        scanf("%d",&cases);
        for(l = 0 ; l < cases ; l++)
        {
            scanf("%d",&arrayLength);
            int array[arrayLength] ;
            int i,j;
            for( i = 0 ; i < arrayLength ; i++)
            {
                scanf("%d",&array[i]);
            }
            int flip = 0;
            for(i = 0 ; i < arrayLength ; i++)
            {
                for( j = i + 1 ; j < arrayLength ; j++)
                {
                    if(array[i] > array[j])
                    {
                        flip++;
                    }
                }
            }
            printf("Optimal train swapping takes %d swaps.\n",flip);
        }
        return 0;
    }
