#include<stdio.h>
main()
{
      unsigned long i,j;
      while(scanf("%lu %lu",&i,&j)==2);
      if(i>j)
{
      printf("%lu\n",i-j);
}
      else
{
      printf("%lu\n",j-i);
}

      return 0;
}
