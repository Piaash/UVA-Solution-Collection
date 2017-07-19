#include<stdio.h>
#include<conio.h>
#include<time.h>
main()
{
      struct tm *ptr;
      time_t lt;
      lt=time(NULL);
      ptr=localtime(&lt);
      printf(asctime(ptr));
      getch();
}
