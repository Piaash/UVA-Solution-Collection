#include<stdio.h>
main()
{
    int n,a,b,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a<b)
        printf("impossible\n");
        else if((a+b)%2!=0)
        printf("impossible\n");
        else
        printf("%d %d\n",(a+b)/2,(a-b)/2);
    }
    return 0;
}
