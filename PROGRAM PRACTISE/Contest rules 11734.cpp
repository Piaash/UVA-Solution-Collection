#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
      int i,m,n;
      char s[19],j[19];
      scanf("%d",&n);
      for(i=1;i<=n;i++)
{
      gets(s);
      gets(j);     
      if(strcmp(s,j)==0)
      printf("Case %d: Yes\n",i);
      else if(strcmp(s,j)==1)
      printf("Case %d: Wrong Answer\n",i);
      else
      for(m=0;m<strlen(s);m++)
{      
      if(s[m]==' ')
      printf("Case %d: Output Format Error\n",i);
}      
      
}            
      getch();
}
