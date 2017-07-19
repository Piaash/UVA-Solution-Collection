#include<stdio.h>
main()
{
    int t,a,i,sum,b,c,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum=0;
        scanf("%d",&a);
        b=a*a;
            if(b>9)
            {
                for(j=1;;j++)
               {
            c=b%10;
            sum=sum+c*c;
            b=b/10;
            if(b==0)
            break;
            if(i%3==0)
            sum=0;
               }
            }
            else if(b<10)
            {
                if(b==1)
                sum=1;
            }
        if(sum==1)
        printf("Case #%d: %d is a Happy number.\n",i+1,a);
        else
        printf("Case #%d: %d is an Unhappy number.\n",i+1,a);
    }
    return 0;
}
