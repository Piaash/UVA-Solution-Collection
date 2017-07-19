#include<stdio.h>
#include<string.h>
main()
{
    char s[21];
    short flag;
    int i;
    while(gets(s))
    {
        flag=0;
            for(i=0;i<strlen(s);i++)
            {
                if((s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')&&flag!=1)
                {
                    printf("1");
                    flag=1;
                }
                else if((s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')&&flag!=2)
                {
                    printf("2");
                    flag=2;
                }
                else if((s[i]=='D'||s[i]=='T')&&flag!=3)
                {
                    printf("3");
                    flag=3;
                }
                else if((s[i]=='L')&&flag!=4)
                {
                    printf("4");
                    flag=4;
                }
                else if((s[i]=='M'||s[i]=='N')&&flag!=5)
                {
                    printf("5");
                    flag=5;
                }
                else if((s[i]=='R')&&flag!=6)
                {
                    printf("6");
                    flag=6;
                }
                else if((s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V'))
                {
                    flag=1;
                }
                else if((s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z'))
                {
                    flag=2;
                }
                else if((s[i]=='D'||s[i]=='T'))
                {
                    flag=3;
                }
                else if((s[i]=='L'))
                {
                    flag=4;
                }
                else if((s[i]=='M'||s[i]=='N'))
                {
                    flag=5;
                }
                else if((s[i]=='R'))
                {
                    flag=6;
                }
                else
                    flag=0;
            }
            printf("\n");
    }
    return 0;
}
