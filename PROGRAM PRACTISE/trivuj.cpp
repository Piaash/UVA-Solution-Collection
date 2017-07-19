#include<stdio.h>
main()
{
      int i,n;
      long a,b,c;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
{
      scanf("%ld %ld %ld",&a,&b,&c);
      if(a>=b+c||b>=c+a||c>=a+b)
      printf("Case %d: Invalid\n",i);
      else if(a==b&&b==c&&c==a)
      printf("Case %d: Equilateral\n",i);
      else if(a==b&&b!=c||b==c&&c!=a||c==a&&a!=b)
      printf("Case %d: Isosceles\n",i);
      else if(a!=b&&b!=c)
      printf("Case %d: Scalene\n",i);
}            
      return 0;
}
