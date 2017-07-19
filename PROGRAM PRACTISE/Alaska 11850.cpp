
#include<cstdio>
#include<algorithm>

    main()
    {
        int stations;
        while(scanf("%d",&stations) == 1)
        {
            if(stations == 0)
            {
                break;
            }
            int position[stations],i;
            for( i = 0 ; i < stations ; i++)
            {
                scanf("%d",&position[i]);
            }
            std::sort(position , position + stations);
            bool flag = true;
            if((1422 -  position[stations - 1])* 2 > 200)
            {
                flag = false;
            }
            else
            {
                for(int i = 0 ; i < stations - 1; i++)
                {
                    if(position[i + 1] - position[i] > 200)
                   {
                       flag = false;
                       break;
                   }
                }
            }
            if(flag == true)
            {
                printf("POSSIBLE\n");
            }
            else
            {
                printf("IMPOSSIBLE\n");
            }
        }
        return 0;
    }
