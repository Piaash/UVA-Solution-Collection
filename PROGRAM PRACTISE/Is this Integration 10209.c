
#include<stdio.h>
#include<math.h>
#define PI 2*acos(0.0)
    main()
    {
        double squareLength;
        while(scanf("%lf",&squareLength) == 1)
        {

            double areaOfSquare = squareLength * squareLength;
             double region1 = areaOfSquare * (1 - sqrt(3) + PI / 3);
             double region2 = areaOfSquare * (2 * sqrt(3) - 4 + PI / 3);
             double region3 = areaOfSquare * (4 - sqrt(3) - 2 * PI / 3);
             printf("%.3lf %.3lf %.3lf\n",region1,region2,region3);
        }
        return 0;
    }

