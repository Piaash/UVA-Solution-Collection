 #include <stdio.h>
 #include<conio.h>  
 main()
 {
       int a[5],i,max=a[1];
       
       for(i=0;i<5;i++)
 {
       scanf("%d",&a[i]); 
       if(a[i]>max)
 {     max=a[i];
 }
       
 }
       printf("%d",max);     
       getch();  
 }  
