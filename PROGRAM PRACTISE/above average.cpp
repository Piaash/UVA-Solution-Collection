#include<stdio.h>
main()
{
      int k,i,j,m,n,a[1000],sum;
      double avg,c;
      scanf("%d",&m);
      for(i=1;i<=m;i++)
{
      sum=0;
      c=0;
      scanf("%d",&n);
      for(j=0;j<n;j++)
{
      scanf("%d",&a[j]);
      sum=sum+a[j];
}
      avg=sum/n;
      for(k=0;k<n;k++)
{
      if(a[k]>avg)
      c++;

}
       printf("%.3lf%%\n",c*100/n);
}
      return 0;
}
