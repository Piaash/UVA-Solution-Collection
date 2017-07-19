 #include <stdio.h>
 #include<conio.h>  
 int main()
 {
       char country[]={'B', 'A', 'N', 'G', 'L', 'A', 'D', 'E', 'S', 'H'};
        int i,len;
        printf("%s\n",country);
        len=10;
      
       for(i=0;i<len;i++)
 {
       if(country[i]>=65 && country[i]<=90)
 {
        country[i]='a'+(country[i]-'A');
      
 }
 }       
        printf("%s\n",country);   
     
       getch();  
 }  
