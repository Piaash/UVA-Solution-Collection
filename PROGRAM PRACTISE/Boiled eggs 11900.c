
#include<stdio.h>

    main()
    {
        int cases,i,j;
        scanf("%d",&cases);
        for(i = 1 ; i <= cases ; i++)
        {
        int arrayLength,maxNumber,maxWeight;
        scanf("%d %d %d",&arrayLength,&maxNumber,&maxWeight);
        int array[arrayLength];
        for(j = 0 ; j < arrayLength ; j++)
        {
            scanf("%d",&array[j]);
        }
        int sum = 0 ;
        int count = 0;
        if(arrayLength < maxNumber)
        {
            maxNumber = arrayLength;
        }
        for(j = 0 ; j < maxNumber ; j++)
        {
            sum += array[j];
            if(sum <= maxWeight)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        printf("Case %d: %d\n",i,count);
        }
        return 0;
    }

