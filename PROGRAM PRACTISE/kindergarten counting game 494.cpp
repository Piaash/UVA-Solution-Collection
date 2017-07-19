#include<stdio.h>
#include<string.h>
main()
{
    char str[1000];
    int i,count,n;
    while(gets(str))
    {
        n=1;
        count=0;
        for(i=0;i<strlen(str);i++)
        {
            if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
            {
                if(n==1)
                count++;
                n=0;
            }
            else
            n=1;
        }
        printf("%d\n",count);
    }
    return 0;
}
