
#include<stdio.h>
main()
{
       int n,Case=0;
       while(scanf("%d",&n)==1)
{
       if(n==0) break;
     int a[1005],i,zero=0,nonzero=0;
    Case++;
     for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
     if(a[i]==0)
     zero++;
     else
     nonzero++;
}
       printf("Case %d: %d\n",Case,nonzero-zero);
}
return 0;
}
