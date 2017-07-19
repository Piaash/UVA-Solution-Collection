#include<stdio.h>
void interchange(int *a,int *sum)
{
                int t=*a;
                *a=*sum;
                *sum=t;
}                
main()
{
      int i,j,k,l,n,a=0,sum=0;
      scanf("%d",&n);
      for(k=1;k<=n;k++)
{
      scanf("%d %d",&i,&j);
      for(l=i;l<=j;l++)
{
      if(l%2==0)
{
      continue;
}
      else
      sum=sum+l;      
}
      interchange(&a,&sum);
      printf("Case %d: %d\n",k,a);                  
}      
      return 0;
}
