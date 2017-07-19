#include<stdio.h>

    main()
    {
        double bachelor,spinster;
        int count = 1;
        while(scanf("%lf %lf",&bachelor,&spinster) == 2)
        {
            if(bachelor == 0 && spinster == 0)
            {
                break;
            }
            if(bachelor < 2)
            {
                printf("Case %d: :-\\\n",count);
            }
            else if(bachelor <= spinster)
            {
                printf("Case %d: :-|\n",count);
            }
            else
            {
                printf("Case %d: :-(\n",count);
            }
            count++;
        }
        return 0;
    }

