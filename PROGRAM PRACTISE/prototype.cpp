#include<stdio.h>
#include<conio.h>
double add(double num1,double num2);//prototype
main()
{
      double a,b,c;
      a=2.5;
      b=2.5;
      c=add(a,b);
      printf("%lf",c);





getch();


      }
  double add(double num1,double num2)
{
              double sum;
              sum=num1+num2;
              return sum;
}                 
