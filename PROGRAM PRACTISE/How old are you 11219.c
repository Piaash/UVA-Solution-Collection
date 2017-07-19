#include<stdio.h>
main()
{
    int t,i,d1,d2,m1,m2,y1,y2,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d/%d/%d",&d1,&m1,&y1);
        scanf("%d/%d/%d",&d2,&m2,&y2);
        r=y1-y2;
        if(y2>y1||(y2==y1&&m2>m1)||(y2==y1&&m2==m1&&d2>d1))
        printf("Case #%d: Invalid birth date\n",i);
        else if(d2>d1&&m2==m1&&r-1>130||m2>m1&&r-1>130)
        printf("Case #%d: Check birth date\n",i);
        else if(d2>d1&&m2==m1&&r-1<=130||m2>m1&&r-1<=130)
        printf("Case #%d: %d\n",i,r-1);
        else if(r<=130)
        printf("Case #%d: %d\n",i,r);
        else
        printf("Case #%d: Check birth date\n",i);
    }
    return 0;
}
