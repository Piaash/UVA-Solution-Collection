#include<stdio.h>

#include<math.h>
#include<conio.h>
 main()
{ 
       float a,b,c,sq,root1,root2;

printf("a=");
scanf("%f",&a);
printf("b=");
scanf("%f",&b);
printf("c=");
scanf("%f",&c);
sq=sqrt((b*b)-(4*a*c));
root1=(-b+sq)/(2*a);
root2=(-b-sq)/(2*a);
printf("root1=%f\nroot2=%f",root1,root2);
 getch();
}     
