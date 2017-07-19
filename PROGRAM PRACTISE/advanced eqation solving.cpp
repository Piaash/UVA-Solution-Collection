
 #include <stdio.h> 
 #include<conio.h>  
  main()   
 { int x,y,a1,b1,a2,b2,c,d;
 
 scanf("%d %d %d %d %d %d",&a1,&b1,&a2,&b2,c,d);
 x=(b1*d-b2*c)/(a2*b1-a1*b2);  
 y=(a1*d-a2*c)/(a1*b2-a2*b1);   
 printf("your answers=%d,%d",x,y);   
    
    
    
    
       
     getch();   
 }  
