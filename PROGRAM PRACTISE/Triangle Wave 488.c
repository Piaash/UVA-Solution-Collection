#include<stdio.h>
main()
    {
        int cases,height,amplitude,i,j,k,l,h,c;
         scanf("%d",&cases);
        for( c = 0;c < cases;c++)
        {
            scanf("%d %d",&amplitude,&height);
            for( h = 0;h < height;h++)
            {
                for( i = 1;i <= amplitude;i++)
                {
                    for( j = 1;j <= i;j++)
                    {
                        printf("%d",i);
                    }
                    printf("\n");
                }
                for( k = amplitude - 1;k >= 1;k--)
                {
                    for( l = 1;l <= k;l++)
                    {
                        printf("%d",k);
                    }
                    printf("\n");
                }
                if(c != cases-1 || h != height-1)
                printf("\n");
            }
        }
        return 0;
    }


