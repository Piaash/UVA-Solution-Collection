#include<stdio.h>
main()
{
      int a,i,n,c1,c2,c3,c4;
      scanf("%d",&a);
      for(i=1;i<=a;i++)
{
      scanf("%d",&n);
      c1=(n*567)/9;
      c2=(c1+7492)*235;
      c3=(c2/47)-498;
      c4=c3/10;
      if(c4>0)
      printf("%d\n",c4%10);
      else
      printf("%d\n",-c4%10);
}            
      return 0;
}

