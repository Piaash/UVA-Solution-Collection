
     
      #include <stdio.h>  
      #include<conio.h>
  main()  
 {  
     int grade ;
     scanf("%d",&grade);  
if(grade>=80 && grade<=100){printf("A+", grade);}
else if(grade>=70&& grade<80){printf("A",grade);}        
else if(grade>=60&& grade<70){printf("B",grade);} 
else if(grade>=50&& grade<60){printf("C",grade);}
else if(grade>=40&& grade<50){printf("D",grade);}
else if(grade>=36&& grade<40){printf("E",grade);}
else if(grade>=0 && grade<36){printf("F",grade);}
else{ printf("no value");}
       
  getch();
     }  
 
 
 
 
