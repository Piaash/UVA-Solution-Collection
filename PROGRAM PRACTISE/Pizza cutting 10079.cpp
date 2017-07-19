#include<stdio.h>
main()
{
      long n;
      while(scanf("%ld",&n)==1)
{
      if(n>=0 && n<=210000000)
      printf("%ld\n",1+(n*(n+1))/2);
      if(n<0)
      break;
}                
      return 0;
}
