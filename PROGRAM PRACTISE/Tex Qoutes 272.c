#include<stdio.h>
#include<string.h>
main()
{
    char s[100000];
    long i;
    long flag=1;
    while(gets(s))
    {
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='\"'&&(flag%2!=0))
                {
                    printf("``");
                    flag++;
                }
                else if(s[i]=='\"'&&(flag%2==0))
                {
                    printf("\'\'");
                    flag++;
                }
                else
                {
                    printf("%c",s[i]);
                }
            }
            printf("\n");
    }
    return 0;
}
