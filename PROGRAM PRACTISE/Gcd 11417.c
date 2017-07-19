#include<stdio.h>
Gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return Gcd(b,a%b);
}
main()
{
    int N,G,i,j;
    while(scanf("%d",&N)==1&&N!=0)
    {
        G=0;
        for(i=1;i<N;i++)

    for(j=i+1;j<=N;j++)
    {

    G+=Gcd(i,j);

    }
    printf("%d\n",G);
    }
    return 0;
}
