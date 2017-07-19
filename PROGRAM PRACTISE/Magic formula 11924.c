#include<stdio.h>
main()
{
        int a,b,c,divisor,limit,sum,count,x;
        while(scanf("%d %d %d %d %d",&a,&b,&c,&divisor,&limit) == 5)
        {
            if(a == 0 && b == 0 && c == 0 && divisor == 0 && limit == 0)
                break;
                 count = 0;
            for(x = 0;x <= limit;x++)
            {
                sum = a*x*x + b*x + c;
                if(sum % divisor == 0)
                    count++;
            }
            printf("%d\n",count);
        }
    }

