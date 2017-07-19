#include<stdio.h>
#include<string.h>
main()
{
    int i,n,j;
    char str1[1000],str2[1000];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(str1);
        gets(str2);
        if(strlen(str1)!=strlen(str2))
        printf("No\n");
        else
        for(j=0;j<strlen(str1);j++)
        {
            if((str1[j]=='a' || str1[j]=='o' || str1[j]=='i' || str1[j]=='e' || str1[j]=='u') && (str2[j]!='a' && str2[j]!='o' && str2[j]!='i' && str2[j]!='e' && str2[j]!='u'))
            {
            printf("No\n");
            break;
            }
            else if((str1[j]!='a' && str1[j]!='o' && str1[j]!='i' && str1[j]!='e' && str1[j]!='u') && str2[j]!=str1[j])
            {
            printf("No\n");
            break;
            }
            else if(j==strlen(str1)-1)
           {
               printf("Yes\n");
               break;
           }
        }
    }
    return 0;
}
