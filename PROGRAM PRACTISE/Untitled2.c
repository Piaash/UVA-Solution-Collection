#include<stdio.h>
int fib(int n)
{
    if(n==0 || n==1)
    return 1;
    else
    return (fib(n-1)+fib(n-2));
}
int main()
{
    int niterms,i;
    printf("enter numbers of terms :");
    scanf("%d",&niterms);
    for(i=0;i<niterms;i++)
    printf("%d ",fib(i));
    printf("\n");
}
