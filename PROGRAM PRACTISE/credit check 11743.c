#include<stdio.h>
main()
{
    int t,i,s1,s2,s3,s4,r11,r12,r13,r14,r15,r16,r17,r18,r21,r22,r23,r24,r25,r26,r27,r28,r1,r2,r;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&s1);
        scanf("%d",&s2);
        scanf("%d",&s3);
        scanf("%d",&s4);
        r11=(s1/1000)*2;
        r12=(s1/10)%10*2;
        r13=s2/1000*2;
        r14=(s2/10)%10*2;
        r15=s3/1000*2;
        r16=(s3/10)%10*2;
        r17=s4/1000*2;
        r18=(s4/10)%10*2;
        r1=r11/10+r11%10+r12/10+r12%10+r13/10+r13%10+r14/10+r14%10+r15/10+r15%10+r16/10+r16%10+r17/10+r17%10+r18/10+r18%10;
        r21=(s1/100)%10;
        r22=s1%10;
        r23=(s2/100)%10;
        r24=s2%10;
        r25=(s3/100)%10;
        r26=s3%10;
        r27=(s4/100)%10;
        r28=s4%10;
        r2=r21+r22+r23+r24+r25+r26+r27+r28;
        r=r1+r2;
        if((r%10)==0)
        printf("Valid\n");
        else
        printf("Invalid\n");
    }
    return 0;
}
