#include<stdio.h>
#include<conio.h>
#include<math.h>
//for base 10 logarithm use log10
main()
{
      int i;
      printf("ENter a value(must not be negative ):");
      scanf("%i",&i);
      printf("ln(%i)=%lf",i,log(i));
      getch();
}
