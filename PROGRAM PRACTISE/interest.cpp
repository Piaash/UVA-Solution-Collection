#include<stdio.h>
#include<conio.h>
main()
{
      float loan,interest,interestrate,total,time,monthlyamount;
      printf("Enter your loan");
      scanf("%f",&loan);
      printf("Enter your interest");
       scanf("%f",&interest);
       printf("Enter your time");
       scanf("%f",&time);
       interestrate=interest/100;
       total=loan+loan*interestrate;
       monthlyamount=total/time;
       printf("interestrate=%f,total=%f,monthly amount=%f",interestrate,total,monthlyamount);
       getch();
      
      } 
