#include<stdio.h>
#include<math.h>
main()
{
    int a,b,r;
    while((scanf("%d%d",&a,&b)==2)&&a!=0&&b!=0)
    {
        r=pow(a,b);
        while(r>9)
        {
            r=r%10;
        }
        printf("%d\n",r);
    }
    return 0;
}
