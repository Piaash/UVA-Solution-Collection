#include<stdio.h>
#include<conio.h>
main()
{
      int n,i;
      for(n=1;n<100;n++)
{      
      for(i=2;i<n;i++)
{      
      if(!(n%i))
      continue;
      

}printf("%d\t",n);
}                  
      getch();


}
