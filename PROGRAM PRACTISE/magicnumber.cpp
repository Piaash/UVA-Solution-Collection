#include<stdio.h>
#include<conio.h>
main()
{
      int magicnumber,guessnumber,i,n;
      //scanf("%d",&magicnumber);
      magicnumber=10;
      scanf("%d",&n);
      for(i=0;i<n;i++)
{
      printf("\nEnter your guess number:");
      scanf("%d",&guessnumber);
      if(guessnumber==magicnumber)
{      
      printf("RIGHT");
      break;
}      
      else if(guessnumber>magicnumber)
      printf("Your guess is higher than the actual value\a");
      else if(guessnumber<magicnumber)
      printf("Your guess is lower than the actual value\a");
}      
                  





      getch();


}
