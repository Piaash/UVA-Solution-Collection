#include<stdio.h>
#include<conio.h>
main()
{
      float litre,gallon;
      int n;
     
      printf("how many times?");
      scanf("%d",&n);
      do
{
      printf("Gallons:");
      scanf("%f",&gallon);
      printf("litres=%f\n",gallon/3.7854);
      n--;
}while(n);            
      getch();
}
