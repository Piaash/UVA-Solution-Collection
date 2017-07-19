#include<stdio.h>
#include<string.h>
#include<math.h>
main()
{
    int i,j,sum,n,b;
    char s[21];
    while(scanf("%s",s)!=EOF)
    {
        sum=0;
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]>=97&&s[i]<=122)
            {
                n=s[i]-96;
                sum=sum+n;
            }
            else if(s[i]>=65&&s[i]<=90)
            {
                n=s[i]-38;
                sum=sum+n;
            }
        }
        b=1;
        for(j=2;j<=sqrt(sum);j++)
        {
            if(sum%j==0)
            {
            b=0;
            break;
            }
        }
        if(b==1||sum==1)
        printf("It is a prime word.\n");
        else if(b==0)
        printf("It is not a prime word.\n");
    }
    return 0;
}
