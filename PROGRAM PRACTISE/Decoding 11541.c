#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char str[1000],s[1000];
    int t,i,j,k;
    scanf("%d",&t);
    while(t--)
    {
        gets(str);
        s[1000]="0";
        for(i=0;i<strlen(str);i++)
        {
            if(isdigit(str[i]))
            {
                s=strcat(s,str[i]);
                for(j=i;j<=strlen(str);j++)
                {
                    if(isdigit(str[j]==0))
                    break;
                    else
                    s=strcat(s,str[j]);
                }
                for(k=0;k<atoi(s);k++)
                printf("%c",str[i-1]);
            }
            if(i==strlen(str)-1)
            printf("\n");
        }
    }
    return 0;
}
