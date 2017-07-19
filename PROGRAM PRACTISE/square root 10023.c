#include<stdio.h>
#include<math.h>
main()
{
    int i,n;
    long long a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        printf("%.0lf\n",sqrt(a));
    }
    return 0;
}
