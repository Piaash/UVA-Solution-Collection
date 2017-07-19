#include<stdio.h>
main()
{
    int t,x,y,x1,y1,i;
    while(scanf("%d",&t)==1&&t!=0)
    {
        scanf("%d %d",&x,&y);
        for(i=0;i<t;i++)
        {
            scanf("%d %d",&x1,&y1);
            if(x1>x&&y1>y)
                printf("NE\n");
            else if(x1<x&&y1>y)
                printf("NO\n");
            else if(x1<x&&y1<y)
                printf("SO\n");
            else if(x1>x&&y1<y)
                printf("SE\n");
            else
                printf("divisa\n");
        }
    }
}
