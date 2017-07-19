#include<stdio.h>
#include<math.h>
main()
{
    int e,i,rev,mod,flag,flag2,flag3;
    while(scanf("%d",&e)==1)
    {
        rev=0;
        flag=0;
        flag2=0;
        flag3=0;
        for(i=2;i<=sqrt(e);i++)
        {
            if(e%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        printf("%d is not prime.\n",e);
        else
        {
            flag2=e;
        while(e>0)
        {
            mod=e%10;
            rev=rev*10+mod;
            e=e/10;
        }
        if(rev==flag2)
        printf("%d is prime.\n",flag2);
        else
        {
        for(i=2;i<=sqrt(rev);i++)
        {
            if(rev%i==0)
            {
                flag3=1;
                break;
            }
        }
        if(flag3==1)
        printf("%d is prime.\n",flag2);
        else
        printf("%d is emirp.\n",flag2);
        }
        }
    }
    return 0;
}
