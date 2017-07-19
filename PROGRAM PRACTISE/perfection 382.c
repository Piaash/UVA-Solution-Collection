#include<stdio.h>
main()
{
    int a,i,sum;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&a)==1)
    {
        sum=0;
        if(a==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        else
        {
            for(i=1;i<=a/2;i++)
            {
               if(a%i==0)
               {
                   sum=sum+i;
               }

            }
            if(sum==a)
            printf("%5d  PERFECT\n",a);
            else if(sum>a)
            printf("%5d  ABUNDANT\n",a);
            else if(sum<a)
            printf("%5d  DEFICIENT\n",a);
        }
    }
    return 0;
}
