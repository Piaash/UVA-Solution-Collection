#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ cout<<"OUTPUT OF THE PROGRAM:\n";
int n;
n=1;
for(int i=0;i<5;i++)
{
for(int j=0;j<5;j++)
{
   if(i>=j) 
   {    
        printf(" ");
   }       
     else
     printf("*");   
}     
               
printf("\n");
n++;        
}


 getchar();
return 0;
}
