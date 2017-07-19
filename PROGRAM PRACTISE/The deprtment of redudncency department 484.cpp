
#include<stdio.h>

    main()
    {
        int array[1000000];
        int i = 0;
        while(1)
        {
            scanf("%d",&array[i]);
            i++;
        }
        int j,l;
        for(j = 0 ; j < i ; j++)
        {
            bool flag = true;
            for(l = 0 ; l < j ; l++)
            {
                if(array[l] == array[j])
                {
                    flag = false;
                    break;
                }
            }
            if(flag == true)
            {
            int count = 0;
            for(l = j; l < i ; l++)
            {
                if(array[l] == array[j])
                {
                    count++;
                }
            }
            printf("%d %d\n",array[j] , count);
        }
            }
            return 0 ;
    }

