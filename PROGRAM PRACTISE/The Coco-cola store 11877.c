#include<stdio.h>
main()
{
    short bottles,freeBottles,remainder;
        while(scanf("%d",&bottles) == 1)
        {
                if(bottles == 0)
                break;
            freeBottles = 0;
            while(1)
            {
                freeBottles += bottles/3;
                remainder = (bottles%3);
                if(bottles < 2)
                    break;
                else if(bottles == 2)
                {
                    freeBottles++;
                    break;
                }
                bottles = (bottles/3 + remainder);
            }
            printf("%d\n",freeBottles);
            }
            return 0;
}
