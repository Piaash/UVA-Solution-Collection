#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
      char str[100];
      int i,space,comma,period;
      space=0;
      comma=0;
      period=0;
      printf("This program will count the numbers of space,comma and periods of that you will write.\n");
      printf("Write something:");
      gets(str);
      for(i=0;i<strlen(str);i++)
{
      switch(str[i])
{      
      case ' ':
      space++;
      break;
      case ',':
      comma++;
      break;
      case '.':
      period++;
      break;
      
}      
}
      printf("space:%d\n",space);
      printf("comma:%d\n",comma);
      printf("period:%d",period);           
      getch();
}
