#include<stdio.h>
main()
{
    int a;
    while(scanf("%d",&a)==1)
    {
        if(a%4==0 || a%15==0 || a%55==0)
        {
        if(a%4==0)
        printf("This is leap year.\n");
        if(a%15==0)
        printf("This is huluculu festival year.\n");
        if(a%55==0)
        printf("This is bulukulu festival year.\n");
        }
        else
        printf("This is an ordinary year.\n");
    }
    return 0;
}
