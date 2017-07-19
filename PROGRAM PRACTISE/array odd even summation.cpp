#include<stdio.h>
#include<conio.h>
main()
{
      int a[10];
      int i,odd,even;
      odd=0;
      even=0;
      printf("Enter 10 numbers:");
      for(i=0;i<10;i++)
      scanf("%d",&a[i]);
      for(i=0;i<10;i++)
{
      if(!(i%2))
      odd=odd+a[i];
      else
      even=even+a[i];
}
      printf("Summation of odd numbers:%d\n",odd);
      printf("Summation of even numbers:%d",even);                        
      getch();
}
