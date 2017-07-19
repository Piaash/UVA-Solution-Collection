#include<stdio.h>
#include<string.h>
main()
{
    int i,t,c,j;
    char s[100];
    scanf("%d",&t);
    for(i=1;i<=t+1;i++)
    {
        gets(s);
        if(strlen(s)==0)
        continue;
        c=0;
        for(j=0;j<strlen(s);j++)
        {
            if(s[j]=='a')
            c=c+1;
            else if(s[j]=='b')
            c=c+2;
            else if(s[j]=='c')
            c=c+3;
            else if(s[j]=='d')
            c=c+1;
            else if(s[j]=='e')
            c=c+2;
            else if(s[j]=='f')
            c=c+3;
            else if(s[j]=='g')
            c=c+1;
            else if(s[j]=='h')
            c=c+2;
            else if(s[j]=='i')
            c=c+3;
            else if(s[j]=='j')
            c=c+1;
            else if(s[j]=='k')
            c=c+2;
            else if(s[j]=='l')
            c=c+3;
            else if(s[j]=='m')
            c=c+1;
            else if(s[j]=='n')
            c=c+2;
            else if(s[j]=='o')
            c=c+3;
            else if(s[j]=='p')
            c=c+1;
            else if(s[j]=='q')
            c=c+2;
            else if(s[j]=='r')
            c=c+3;
            else if(s[j]=='s')
            c=c+4;
            else if(s[j]=='t')
            c=c+1;
            else if(s[j]=='u')
            c=c+2;
            else if(s[j]=='v')
            c=c+3;
            else if(s[j]=='w')
            c=c+1;
            else if(s[j]=='x')
            c=c+2;
            else if(s[j]=='y')
            c=c+3;
            else if(s[j]=='z')
            c=c+4;
            else if(s[j]==' ')
            c=c+1;
            }
            printf("Case #%d: %d\n",i-1,c);
    }
    return 0;
}
