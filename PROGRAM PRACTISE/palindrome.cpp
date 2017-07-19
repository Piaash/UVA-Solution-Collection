#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
      char word[25],revesreword[25];
      int i,j;
      gets(word);
      for(i=0,j=strlen(word)-1;i<strlen(word);i++,j--)
{
      revesreword[i]=word[j];
}
      revesreword[i]='\0';
      printf("%s",revesreword);
      if(!(strcmp(word,revesreword)))
{
      printf("\npalindrome");
}      
      else
{      
      printf("\nnot palindrome");            
}      
      





getch();


      }
