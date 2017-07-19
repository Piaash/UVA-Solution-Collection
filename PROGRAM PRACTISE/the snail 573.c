
#include<stdio.h>

    main()
    {
        double height,climb,slide,fatigue;
        while(scanf("%lf %lf %lf %lf",&height,&climb,&slide,&fatigue) == 4 && height != 0)
        {
            double sum = 0;
            int count = 0;
            fatigue = fatigue / 100 * climb;
            while(1)
            {
                if(fatigue * count <= climb)
                {
                sum += climb - (fatigue * count);
                }
                count++;
                if(sum > height)
                {
                    printf("success on day %d\n", count);
                    break;
                }
                sum -= slide;
                if(sum < 0)
                {
                    printf("failure on day %d\n", count);
                    break;
                }
            }
        }
        return 0;
    }
