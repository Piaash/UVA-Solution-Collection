#include<stdio.h>
main()
{
      int i,j,k,n;
      scanf("%d",&n);
      for(k=0;k<n;k++)
{      
      scanf("%d %d",&i,&j);
      if(i>j)
      printf(">\n");
      if(i<j)
      printf("<\n");
      if(i==j)
      printf("=\n");
}      
      return 0;
}
