#include<stdio.h>
main()
{
    int t,i,a,b,c,d;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==b&&b==c&&c==d)
    printf("square\n");
    else if((a==c&&b==d)||(a==b&&c==d)||(a==d&&b==c))
    printf("rectangle\n");
    else if(a<=b+c+d && b<=c+d+a && c<=d+a+b && d<=a+b+c)
    printf("quadrangle\n");
    else
    printf("banana\n");
    }
    return 0;
}
