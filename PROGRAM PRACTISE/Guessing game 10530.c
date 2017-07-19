#include<stdio.h>
#include<string.h>
main()
{
        int number,max = 11,min = 0;
        char s[20];
        while(scanf("%d",&number)==1)
        {
            if(number == 0)
                break;
                getchar();
            gets(s);
            if(strcmp("too high",s)==0)
            {
                if(max > number)
                {
                    max = number;
                }
            }
            else if(strcmp("too low",s)==0)
            {
                if(min < number)
                    min = number;
            }
            else
            {
                if(number > min && number < max)
            printf("Stan may be honest\n");
             else
            printf("Stan is dishonest\n");
                max=11;
                min=0;
        }
        }
    return 0;
}
