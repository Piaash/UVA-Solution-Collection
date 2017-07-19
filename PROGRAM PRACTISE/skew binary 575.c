#include<stdio.h>
#include<math.h>
main()
{
    int a[10000],i,sum,b;
    while(scanf("%d",&a)==1 && a!=0)
    {
        sum=0;
        for(i=0;i<a;i++)
        {
            b=a[i]%10;
            sum=sum+b*(pow(2,i+1)-1);
        }
        printf("%d",sum);
    }
    return 0;
}
