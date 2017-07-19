#include<stdio.h>
    main()
    {
        int a,b,c,d;
        for( a = 6 ; a <= 200 ; a++)
        {
            for( b = 2 ; b <= 200; b++)
            {
                for( c = b ; c <= 200; c++)
                {
                    for( d = c ; d <= 200 ; d++)
                    {
                        if((a * a * a) == (b * b * b) + (c * c * c) + (d * d * d))
                        {
                            printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
                        }
                        else if((a * a * a) < (b * b * b) + (c * c * c) + (d * d * d))
                        {
                            break;
                        }
                    }
                }
            }
        }
        return 0;
    }

