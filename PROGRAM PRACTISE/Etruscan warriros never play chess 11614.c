# include <stdio.h>
# include <math.h>
main()
{
    long long i,n,t,sum;
   scanf("%lld",&t);
   for(i=0;i<t;i++)
   {
       scanf("%lld",&n);
       sum=(sqrt(1+8*n)-1)/2;
       printf("%lld\n",sum);
   }
    return 0;
}
