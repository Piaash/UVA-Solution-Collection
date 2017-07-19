
#include<stdio.h>
#include<string.h>
#include<ctype.h>
    main()
    {
        int i;
        char name1[30];
        while(gets(name1))
        {
            int name1Length = strlen(name1);
            for(i = 0; i < name1Length; i++)
            {
            name1[i] = tolower(name1[i]);
            }
            char name2[30];
            gets(name2);
            int name2Length = strlen(name2);
            for(i = 0; i < name2Length; i++)
            {
            name2[i] = tolower(name2[i]);
            }
            long long sum1 = 0;
            for(i = 0 ; i < name1Length; i++)
            {
                if(name1[i] >= 'a' && name1[i] <= 'z')
                {
                    sum1 += name1[i] - 96;
                }
            }
            long long sum2 = 0;
            while(1)
            {
                sum2 += sum1 % 10;
                sum1 = sum1 / 10;
                if(sum1 == 0)
                {
                    if(sum2 < 10)
                    {
                        break;
                    }
                    else
                    {
                        sum1 = sum2;
                        sum2 = 0;
                    }
                }
            }
            long long sum3 = 0;
            for( i = 0 ; i < name2Length ; i++)
            {
                if(name2[i] >= 'a' && name2[i] <= 'z')
                {
                    sum3 += name2[i] - 96;
                }
            }
            long long sum4 = 0;
            while(1)
            {
                sum4 += sum3 % 10;
                sum3 = sum3 / 10;
                if(sum3 == 0)
                {
                    if(sum4 < 10)
                    {
                        break;
                    }
                    else
                    {
                        sum3 = sum4;
                        sum4 = 0;
                    }
                }
            }
            if(sum4 == 0 || sum2 == 0)
            {
                printf("0.00 %%\n");
            }
            else if(sum2 > sum4)
            {
                double ratio = (double) sum4 / (double) sum2 * 100.0;
                printf("%.2f %%\n",ratio);
            }
            else
            {
                double ratio = (double) sum2 / (double) sum4 * 100.0;
                printf("%.2f %%\n",ratio);
            }
        }
        return 0;
    }

