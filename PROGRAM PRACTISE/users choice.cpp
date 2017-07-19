#include<stdio.h>
#include<conio.h>
main()
{
      int num1,num2,input;
      printf("num1=");
      scanf("%d",&num1);
      printf("num2=");
      scanf("%d",&num2);
      printf("\n1.sum 2.multiplication\n");
      printf("enter your choice");
      scanf("%d",&input);
      if(input==1)
      printf("%d",num1+num2);
      if(input==2)
      printf("%d",num1*num2);
      if(input<1 || input>2)
      printf("mistake");
      getch();


}
