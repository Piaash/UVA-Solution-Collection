#include<stdio.h>
#include<conio.h>
main()
{
      long n,a;
      int i,j,c=0;
      while(scanf("%ld",&n)==1 && n!=0)
{
      for(i=1;i<=n;i++)
{
      a=n%10;
      if(a==1 || a==0)
      c++;
      else
      for(j=2;j<a;j++)
{
      if(a%j==0)
      continue;
      else
      c++;
}     
}
      printf("%d\n",c);
}                       
      getch();
}
