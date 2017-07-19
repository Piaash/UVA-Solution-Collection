#include<stdio.h>
main()
{
      long i;
      while((scanf("%ld",&i)==1)&&(i!=0))
{
      if(i<=9)
      printf("%ld\n",i);
      else if(i%9==0)
      printf("9\n");
      else if(i>9)
      printf("%ld\n",i%9);
}            
      return 0;
}
