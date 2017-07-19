

#include<stdio.h>
#include<math.h>
#define PI 2*acos(0.0)

    main()
    {
        int length, width, height, angle;
        while(scanf("%d %d %d %d",&length, &width, &height, &angle) == 4)
        {
            double calculation = length * (tan(angle * PI / 180.0));
            if(calculation > height)
            {
                printf("%.3f mL\n",0.5 * height * height * length * width / calculation);
            }
            else
            {
                printf("%.3f mL\n",length * width * ((height)-(calculation * 0.5)));
            }
        }
        return 0;
        }
