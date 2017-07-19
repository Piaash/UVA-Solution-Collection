#include<stdio.h>
#include<conio.h>
main()
{
      int s,v,i,n;
      printf("How many times?");
      scanf("%d",&n);
      for(i=0;i<n;i++)
{
      printf("average velocity:");
      scanf("%d",&v);
      printf("distance:");
      scanf("%d",&s);
      printf("time=%d\n",s/v);     
}
      getch();


}
