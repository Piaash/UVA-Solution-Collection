#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int a);
main()
{
      double x,n,i,sum=0.0,p;
      scanf("%i",x);
      scanf("%i",n);
      for(i=0.0,p=1.0;i<=n,p<=n;i++,p+=3)
{
      if(i%2==0)
      sum=sum+pow(p,x)/fact(p);
      else
      sum=sum-pow(p,x)/fact(p);
}
      printf("%lf",sum);
}                 
      getch();
}
int fact(int a)
{
    int factorial,i;
    for(i=1;i<n;i++)
{
    factorial=factorial*i;
    return factorial;
}        
    
