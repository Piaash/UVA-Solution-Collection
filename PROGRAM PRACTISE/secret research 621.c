#include<stdio.h>
#include<string.h>
main()
{
    int n,i;
    char s[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&s);
        if((s[0]=='1' && strlen(s)==1) || (s[0]=='4' && strlen(s)==1) || (s[0]=='7' && s[1]=='8' && strlen(s)==2))
        printf("+\n");
        else if(s[strlen(s)-1]=='5' && s[strlen(s)-2]=='3')
        printf("-\n");
        else if(s[0]=='9' && s[strlen(s)-1]=='4')
        printf("*\n");
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
        printf("?\n");
    }
    return 0;
}
