#include<stdio.h>
main()
{
      int v,t;
      while(scanf("%d %d",&v,&t)==2)
{      
      if((v>=-100||v<=100)&&(t>=0||v<=100)) 
      printf("%d\n",v*t*2);
      else
      break;
}      
      return 0;;
}
