
#include<stdio.h>
#include<math.h>
    main()
    {
        int cases ;
        scanf("%d",&cases);
        while(cases--)
        {
            double players,probability,serial;
            scanf("%lf %lf %lf",&players,&probability,&serial);
            if(probability == 0)
            {
                printf("0.0000\n");
            }
            else if( probability == 1 )
		{
			if( serial == 1 )
			{
				printf("1.0000\n");
			}
			else
			{
				printf("0.0000\n");
			}
		}
            else
            {
               double answer = probability * (pow(1.0 - probability, serial - 1.0)) / (1.0 - pow(1.0 - probability, players));
               printf("%.4lf\n",answer + 1e-8);
            }
        }
        return 0;
    }
