#include<stdio.h>
#include<string.h>
main()
{
    int t,i,j,k;
    char s1[1000];
    char s2[1000];
    char s3[1000];
    char s4[1000];
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        gets(s1);
        gets(s2);
        if(strcmp(s1,s2)==0)
        printf("Case %d: Yes\n",i+1);
        else
        {
        for(j=0,k=0;j<strlen(s1);j++)
        {
            if(s1[j]!=' ')
            {
                s3[k]=s1[j];
                k++;
            }
        }
        s3[k]='\0';
        for(j=0,k=0;j<strlen(s2);j++)
        {
            if(s2[j]!=' ')
            {
                s4[k]=s2[j];
                k++;
            }
        }
        s4[k]='\0';
        if(strcmp(s4,s3)==0)
        printf("Case %d: Output Format Error\n",i+1);
        else if(strcmp(s4,s3)!=0)
        printf("Case %d: Wrong Answer\n",i+1);
        }
    }
    return 0;
}
