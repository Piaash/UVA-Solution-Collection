#include<stdio.h>
main()
{
  int t,h,m,i,rh,rm;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
      scanf("%d:%d",&h,&m);
      if(h==12&&m==0)
      rh=12;
      else if(h==12&&m>0)
      rh=11;
      else if(h==6&&m==0)
      rh=6;
      else if(h==6&&m>0)
      rh=5;
      else if(h==1&&m==0)
      rh=11;
      else if(h==1&&m>0)
      rh=10;
      else if(h==2&&m==0)
      rh=10;
      else if(h==2&&m>0)
      rh=9;
      else if(h==3&&m==0)
      rh=9;
      else if(h==3&&m>0)
      rh=8;
      else if(h==4&&m==0)
      rh=8;
      else if(h==4&&m>0)
      rh=7;
      else if(h==5&&m==0)
      rh=7;
      else if(h==5&&m>0)
      rh=6;
      else if(h==7&&m==0)
      rh=5;
      else if(h==7&&m>0)
      rh=4;
      else if(h==8&&m==0)
      rh=4;
      else if(h==8&&m>0)
      rh=3;
      else if(h==9&&m==0)
      rh=3;
      else if(h==9&&m>0)
      rh=2;
      else if(h==10&&m==0)
      rh=2;
      else if(h==10&&m>0)
      rh=1;
      else if(h==11&&m==0)
      rh=1;
      else if(h==11&&m>0)
      rh=12;
      if(m==0)
      rm=0;
      else
      rm=60-m;
      printf("%.2d:%.2d\n",rh,rm);

  }
  return 0;
}
