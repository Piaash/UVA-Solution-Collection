
#include<cstdio>
#include<algorithm>

    main()
    {
        int numberOfHeads , numberOfKnights;
        while(scanf("%d %d",&numberOfHeads,&numberOfKnights) == 2)
        {
            if(numberOfHeads == 0 && numberOfKnights == 0)
            {
                break;
            }
            bool flag = true;
            if(numberOfHeads > numberOfKnights)
            {
                flag = false;
            }
            else
            {

                int dragonHeadHeight[numberOfHeads];
                int i;
                for(i = 0; i < numberOfHeads ; i++)
                {
                    scanf("%d",&dragonHeadHeight[i]);
                }
                int knightHeight[numberOfKnights];
                for(i = 0; i < numberOfKnights ; i++)
                {
                    scanf("%d",&knightHeight[i]);
                }
                std::sort(dragonHeadHeight,dragonHeadHeight + numberOfHeads);
                std::sort(knightHeight, knightHeight + numberOfKnights);
                int sum = 0;
                int count = 0;
                int j;
                for(i = 0; i < numberOfHeads ; i++)
                {
                    for(j = count ; j < numberOfKnights ; j++)
                    {
                        if(numberOfHeads - i > numberOfKnights - j)
                        {
                            flag = false;
                            break;
                        }
                        else if(knightHeight[j] >= dragonHeadHeight[i])
                        {
                            sum += knightHeight[j];
                            count++;
                            break;
                        }
                        else
                        {
                            count++;
                        }
                    }
                    if(flag == false)
                    {
                        break;
                    }
                }
                if(flag == true)
                {
                    printf("%d\n",sum);
                }
            }
            if(flag == false)
            {
                 printf("Loowater is doomed!\n");
            }
        }
        return 0 ;
    }

