#include<stdio.h>
#include<string.h>
main()
{
    int i,j;
    char str[1000];
    gets(str);
    printf("%d\n",strlen(str));
    for(i=0;i<strlen(str);i++)
    {
        for(j=strlen(str)-1;j>=0;j--)
        {
        str[i]=str[j];
        }

    }
      puts(str);
       return 0;
}
