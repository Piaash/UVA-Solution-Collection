
 #include <stdio.h> 
 #include<conio.h>  
  main()   
 { float n,i,fact=1,sum=0;
scanf("%f",&n);   
   for(i=1;i<=n;i++) 
 { 
 fact=fact*i;
 sum=sum+(i*i)/fact;
   
    
    
} 
   printf("%f",sum);  
       
     getch();   
 }  
