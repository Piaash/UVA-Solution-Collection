#include<stdio.h>
#include<conio.h>

main()
{
      char ch;
      int r,a,b;
      float pi=3.1416;
      printf("Choose your area type:");
      printf("\nCircle,Rectangle,Triangle\nType the first alphabet:");
      scanf("%c",&ch);
      if(ch=='C')
{
      printf("Radius:");
      scanf("%d",&r);
      printf("Area of rectangle is %f",pi*r*r);
}
      else if(ch=='R')
{
      printf("Lengths:");
      scanf("%d %d",&a,&b);
      printf("Area of rectangle is %d",a*b);
}     
      else if(ch=='T')
{
      printf("bhumi&atibhuz:");
      scanf("%d %d",&a,&b);
      printf("Area of triangle is %f",.5*a*b);
}
      else
      printf("invalid");
      getch();


}
