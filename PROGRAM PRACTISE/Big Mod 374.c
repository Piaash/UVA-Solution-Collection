#include<stdio.h>
    int recursion(long long x ,long long n ,long long m)
    {
        if(n == 0)
        {
            return 1;
        }
        else if(n % 2 == 0)
        {
            return (recursion( x,n / 2,m) * recursion(x,n / 2, m)) % m;
        }
            return (recursion(x ,n - 1 , m) * (x % m)) % m;
    }
    main()
    {
        int number , power , mod;
        while(scanf("%d %d %d",&number,&power,&mod) == 3)
        {
            printf("%d\n",recursion(number,power,mod));
        }
        return 0;
    }
