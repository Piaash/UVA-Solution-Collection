#include<stdio.h>
main()
{
      int i,n;
      float c,f,r;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
{
      scanf("%f %f",&c,&f);
      r=f+(32+(9*c)/(5));
      printf("Case %d: %.2f\n",i,(5*r-160)/9);
}
      return 0;
}

