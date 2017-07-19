#include<stdio.h>
#include<conio.h>
main()
{
      int i,m,n,j,a[10],c,d;
      scanf("%d",&m);
      for(i=1;i<=m;i++)
{
      scanf("%d",&n);
      for(i=0;i<n;i++)
{
      scanf("%d",&a[i]);
      if(a[i]>a[i+1])
      c++;
      else if(a[i]<a[i+1])
      d++;
      if(c==d)
      printf("%d\n",a[i]);
}            
}      
      getch();
}
