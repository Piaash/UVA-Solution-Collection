#include<stdio.h>
struct s_stype {
       int i;
       char ch;
       double d;
       char str[80];
} s;       
int main(void)
{
      printf("Enter an integer:  ");
      scanf("%d:",&s.i);
      printf("Here is your integer:%d\n",s.i);
      printf("Enter a character:  ");
      scanf(" %c",&s.ch);
      printf("Here is your character:%d\n",s.ch);
      printf("Enter a double:  ");
      scanf("%lf",&s.d);
      printf("Here is your double:%lf",s.d);
      return 0;
}






      
