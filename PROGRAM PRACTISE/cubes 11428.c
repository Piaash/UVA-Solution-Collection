#include<stdio.h>
#include<math.h>
main()
{
    int i,j,x,y,n,c,a;
    while(scanf("%d",&n)==1 && n!=0)
    {
       for(i=1;i<n/2;i++)
       {
           a=0;
           for(j=1;j<n/2;j++)
           {
               if(n==(pow(i,3)-pow(j,3)))
               {
               printf("%d %d\n",i,j);
               goto loop;
               }
           }
       }
       printf("No solution\n");
       loop:;
    }
    return 0;
}
