#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
    int i,c,l;
    char s[1000],c1,c2;
    while(1)
    {
        gets(s);
        if(isupper(s[0]))
        c1=tolower(s[0]);
        else
        continue;
        printf("%c\n",c1);
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]==' ')
            {
                if(isupper(s[i+1]))
                c2=tolower(s[i+1]);
                else
                continue;
                if(c2!=c1)
                {
                c=1;
                break;
                }
            }
        }
        if(c==1)
        printf("N\n");
        else
        printf("Y\n");
    }
    return 0;
}
