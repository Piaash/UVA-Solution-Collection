#include<stdio.h>

 main()
    {
        int cases,caseCount = 1;
        double amount,tax;
        scanf("%d",&cases);
        while(cases--)
        {
            tax = 0.0;
            scanf("%lf",&amount);
            if(amount <= 180000.0)
                tax = 0.0;
            else if(amount > 180000.0 && amount <= 480000.0)
                tax = (amount - 180000) / 10.0;
            else if(amount > 480000.0 && amount <= 880000.0)
                tax = 30000.0 + (amount - 480000.0)*15.0 / 100.0;
            else if(amount > 880000.0 && amount <= 1180000.0)
                tax = 90000.0 + (amount - 880000.0)*20.0 / 100.0;
            else if(amount > 1180000.0)
                tax = 150000.0 + (amount - 1180000.0)*25.0 / 100.0;
            if(tax > 0.0 && tax < 2000.0)
                printf("Case %d: 2000\n",caseCount++);
            else
                printf("Case %d: %.0lf\n",caseCount++,ceil(tax));
        }
        return 0;
    }

