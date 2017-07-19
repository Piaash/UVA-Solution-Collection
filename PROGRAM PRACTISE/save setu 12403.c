#include<stdio.h>
main()
{
    int k,sum=0,t;
    char str[10];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        scanf("%s",str);
        if(strcmp(str,"donate")==0)
        {
            scanf("%d",&k);
            sum+=k;
        }
        else if(strcmp(str,"report")==0)
        printf("%d\n",sum);
    }
    return 0;
}
