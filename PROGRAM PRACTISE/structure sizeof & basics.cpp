#include<stdio.h>
#include<conio.h>
struct catalog{
int i;
}card;
main()
{
      printf("Structure is %d bytes long.\n",sizeof(catalog));
      printf("Enter an integer:");
      scanf("%i",&card.i);
      printf("%i",card.i);
      getch();
}
