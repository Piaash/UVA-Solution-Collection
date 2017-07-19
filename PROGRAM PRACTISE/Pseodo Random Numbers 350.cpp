

#include<stdio.h>

    main()
    {
        int count = 1;
        while(1)
        {
            int multiplier , increment,mod,number;
            scanf("%d %d %d %d",&multiplier,&increment,&mod,&number);
            if(multiplier == 0 && increment == 0 && mod == 0 && number == 0)
            {
                break;
            }
            int newNumber = number;
            int array[10000];
            array[0] = number;
            int cycle = 1;
            bool flag = true;
            for(int i = 1; ; i++)
            {
                newNumber = ((newNumber * multiplier) + increment) % mod;
                array[i] = newNumber;
                for(int j = 0 ; j < i ; j++)
                {
                if(newNumber == array[j])
                {
                    flag = false;
                    break;
                }
                }
                if(flag == false)
                {
                    break;
                }
                cycle++;
            }
            if(newNumber == number)
            {
                printf("Case %d: %d\n",count,cycle);
            }
            else
            {
                printf("Case %d: %d\n",count,cycle - 1);
            }
            count++;
        }
        return 0 ;
    }
