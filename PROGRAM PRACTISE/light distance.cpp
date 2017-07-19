#include<stdio.h>
#include<conio.h>
main()
{
      unsigned long distance;
      printf("Enter your distance in miles:");
      scanf("%lu",&distance);
      printf("Time that takes for light to travel that distance:");
      printf("%lus",distance/186000);
      getch();
}
