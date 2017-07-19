
#include<stdio.h>

    main()
    {
        int cases ;
        scanf("%d",&cases);
        while(cases--)
        {
            int numberOfFarmers;
            scanf("%d",&numberOfFarmers);
            int sum = 0 ;
            int i;
            for( i = 0 ; i < numberOfFarmers ; i++)
            {
                int sizeOfFarm , numberOfAnimals , environmentFriendliness;
                scanf("%d %d %d",&sizeOfFarm,&numberOfAnimals,&environmentFriendliness);
                sum += sizeOfFarm * environmentFriendliness;
            }
            printf("%d\n",sum);
        }
        return 0;
    }

