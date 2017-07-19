#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
      int i;
      printf("Enter an integer:");
      scanf("%i",&i);
      printf("See the exponential:e^%i=%lf",i,exp(i));
      getch();
}
