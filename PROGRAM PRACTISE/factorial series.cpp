#include<stdio.h>
#include<conio.h>
main()
{int n,i,a=1,sum=0;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
{ a=a*i;
 sum=sum+a;
}
 printf("%d",sum);

 getch();
}
