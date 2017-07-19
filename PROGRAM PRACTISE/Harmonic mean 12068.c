#include<stdio.h>
gcd(long long int a,long long int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
lcm(long long int a,long long int b)
{
    long long int c;
    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    return a*(b/gcd(a,b));
}
main()
{
    long long t,a[12],sum,s,l,u,r,h,n,i,j;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        for(j=0;j<n;j++)
        {
            scanf("%lld",&a[j]);
        }
        if(n==1)
        r=a[0];
        else
        r=lcm(a[0],a[1]);
        if(n>2)
        for(j=2;j<n;j++)
        {
            r=lcm(r,a[j]);
        }
        u=n*r;
        sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+r/a[j];
        }
        l=sum/gcd(u,sum);
        h=u/gcd(u,sum);
        printf("Case %lld: %lld/%lld\n",i,h,l);
    }
    return 0;
}
