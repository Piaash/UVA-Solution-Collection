
#include<stdio.h>
#include<string.h>

main()
{
    char str[100];
    int i,j,cases;
    scanf("%d",&cases);
    getchar();
    for(j=0;j<cases;j++)
    {
        while(gets(str))
        {
            if(strlen(str) == 0)
            {
                break;
            }

        for(i=0;i<strlen(str);i++)
          {
           if(str[i]=='4')
           printf("A");
           else if(str[i]=='8')
           printf("B");
           else if(str[i]=='3')
           printf("E");
           else if(str[i]=='6')
           printf("G");
           else if(str[i]=='1')
           printf("I");
           else if(str[i]=='0')
           printf("O");
           else if(str[i]=='9')
           printf("P");
           else if(str[i]=='5')
           printf("S");
           else if(str[i]=='7')
           printf("T");
           else if(str[i]=='2')
           printf("Z");
           else
           printf("%c",str[i]);
          }
          printf("\n");
        }
       if(j != cases-1)
       printf("\n");
    }
    return 0;
}
