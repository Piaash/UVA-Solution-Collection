
#include<stdio.h>
#include<math.h>
    main()
    {
        long n;
        while(scanf("%ld",&n) == 1)
        {
            if(n == 0)
            {
                break;
            }
            double L = floor(log(n) - log(2.0) + 1.0);;
            double x = 1.0 - exp(log(n) - L);
            printf("%.0lf %.8lf\n",L , x);
        }
        return 0;
    }
