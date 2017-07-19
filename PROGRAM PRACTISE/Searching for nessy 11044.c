
#include<stdio.h>
#include<math.h>

    main()
    {
        int cases;
        scanf("%d",&cases);
        while(cases--)
        {
            double row , column;
            scanf("%lf %lf",&row,&column);
            printf("%.0lf\n",ceil((row - 2) / 3) * ceil((column - 2) / 3));
        }
        return 0;
    }
