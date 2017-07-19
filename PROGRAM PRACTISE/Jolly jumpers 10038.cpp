#include<cstdio>
#include<cstdlib>
#include<algorithm>

    main()
    {
        int arrayLength;
        while(scanf("%d",&arrayLength) == 1)
        {
            int array[arrayLength];
            int i;
            for(i = 0 ; i < arrayLength ; i++)
            {
                scanf("%d",&array[i]);
            }
            int differenceArray [arrayLength - 1];
            for(i = 1 ; i < arrayLength ; i++)
            {
                differenceArray[i - 1] = abs(array[i] - array[i - 1]);
            }
            std::sort(differenceArray,differenceArray + sizeof(differenceArray) / sizeof(differenceArray[0]));
            bool flag = true;
            if(i == 1)
            {
                flag = true;
            }
            else
            {
            if(differenceArray[0] != 1)
                {
                    flag = false;
                }
            for(int i = 1 ; i < arrayLength - 1; i++)
            {
                if(abs(differenceArray[i] - differenceArray[i - 1]) != 1)
                {
                    flag = false;
                    break;
                }
            }
            }
            if(flag == true)
            {
                printf("Jolly\n");
            }
            else
            {
                printf("Not jolly\n");
            }
        }
        return 0 ;
    }
