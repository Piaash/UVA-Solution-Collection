#include<stdio.h>
main()
{
    long n,k;
    while(scanf("%ld %ld",&n,&k)==2)
    printf("%ld\n",n+(n-1)/(k-1));
}
