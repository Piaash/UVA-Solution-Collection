#include<iostream>
#include<stdio.h>
#include<algorithm>
main()
{
      int i,j,k,l,n,t;
      int a[200001];
      while(scanf("%d",&n)==1 && n!=0)
      {
          t=0;
      for(i=0;i<n;i++)
      {
          scanf("%ld",&a[i]);
      }
      for(i=0;i<n;i++)
{
      for(j=0;j<n-1;j++)
      {
      if(a[j]>a[j+1])
{
      t=a[j];
      a[j]=a[j+1];
      a[j+1]=t;
}
      }
}
      for(i=0;i<n;i++)
      printf("%ld ",a[i]);
      printf("\n");
}
      return 0;
      }
