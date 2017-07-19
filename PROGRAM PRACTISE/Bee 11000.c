#include<stdio.h>

main()
{
        long long fibonacciCarrier1,fibonacciCarrier2,sum;
        int i,year,j;
        long array[100000];
        while(scanf("%d",&year) == 1)
        {
            fibonacciCarrier1 = sum = 0;
            i = 0;
            fibonacciCarrier2 = 1;
            if(year < 0)
                break;
            array[i] = fibonacciCarrier2;
		while(i <= year)
		{
			i++;
			array[i]=fibonacciCarrier1 + fibonacciCarrier2;
			fibonacciCarrier1 = fibonacciCarrier2;
			fibonacciCarrier2 = array[i];
		}
                for(j= 0; j < year; j++)
                {
                    sum += array[j];
                }
                printf("%lld %lld\n",sum,(sum + array[year]));
        }
    }

