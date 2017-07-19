
#include<stdio.h>

    main()
    {
        int initialPosition,first,second,third;
        while(scanf("%d %d %d %d",&initialPosition,&first,&second,&third) == 4)
        {
            int sum = 1080;
            int temp;
            temp = initialPosition - first;
            if(temp < 0)
            {
                temp += 40;
            }
            sum += temp * 9;
            temp = second - first;
            if(temp < 0)
            {
                temp += 40;
            }
            sum += temp * 9;
            temp = second - third;
            if(temp < 0)
            {
                temp += 40;
            }
            sum += temp * 9;
            printf("%d\n",sum);
        }
        return 0;
    }

