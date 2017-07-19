
#include<stdio.h>
#include<string.h>

    main()
    {
        int cases;
        scanf("%d",&cases);
        while(cases--)
        {
            int numberOfPaidCharacters ;
            scanf("%d",&numberOfPaidCharacters);
            char paidCharacter[numberOfPaidCharacters];
            int cents[numberOfPaidCharacters];
            int i,j,k;
            double sum = 0;
            for( i = 0; i < numberOfPaidCharacters; i++)
            {
                scanf("%c",paidCharacter);
                scanf("%d",&cents[i]);
            }
            int numberOfLines ;
            scanf("%d",&numberOfLines);
            char line[10000];
            char article[numberOfLines];
            for( j = 0; j < numberOfLines; j++)
            {
                gets(line);
                strcpy(article[j], line);
            }
            for( i = 0; i < numberOfPaidCharacters; i++)
            {
                for( j = 0; j < numberOfLines; j++)
                {
                    for( k = 0; k < line[j].length(); k++)
                    {
                        if(line[j].charAt(k) == paidCharacter[i])
                        sum += cents[i];
                    }
                }
            }
            printf("%.2f$\n",sum / 100);
        }
        return 0;
    }

