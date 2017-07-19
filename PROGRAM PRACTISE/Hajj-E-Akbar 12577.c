#include<stdio.h>
#include<string.h>
main()
{
    int i;
    char s[1000];
    for(i=1;;i++)
    {
        scanf("%s",s);
        if(strcmp(s,"*")==0)
        break;
        else if(strcmp(s,"Hajj")==0)
        printf("Case %d: Hajj-e-Akbar\n",i);
        else if(strcmp(s,"Umrah")==0)
        printf("Case %d: Hajj-e-Asghar\n",i);
    }
    return 0;
}
