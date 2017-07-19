#include<stdio.h>
#include<string.h>
main()
{
    int t,i;
    char s[1000];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(s);
        if(strlen(s)==3&&s[0]=='o'&&s[1]=='n'||s[0]=='o'&&s[2]=='e'||s[1]=='n'&&s[2]=='e')
        printf("1\n");
        else if(strlen(s)==3&&s[0]=='t'&&s[1]=='w'||s[0]=='t'&&s[2]=='o'||s[1]=='w'&&s[2]=='o')
        printf("2\n");
        else if(strlen(s)==5&&s[0]=='t'&&s[1]=='h'&&s[2]=='r'&&s[3]=='e'||s[0]=='t'&&s[1]=='h'&&s[2]=='r'&&s[4]=='e'||s[0]=='t'&&s[1]=='h'&&s[3]=='e'&&s[4]=='e'||s[0]=='t'&&s[2]=='r'&&s[3]=='e'&&s[4]=='e'||s[1]=='h'&&s[2]=='r'&&s[3]=='e'&&s[4]=='e')
        printf("3\n");
    }
    return 0;
}
