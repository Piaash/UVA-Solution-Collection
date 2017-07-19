# include <stdio.h>
# include <iostream>
main()
{
    long long n,p;
    bool flag;
 while(scanf("%lld",&n) == 1)
 {
     flag = true;
     p = 1;
    while(p < n)
    {
            if(flag == false)
            {
                p *= 2;
                flag = true;
            }
            else
            {
                p *= 9;
                flag = false;
            }
    }
    if(flag == true)
    printf("Ollie wins.\n");
    else
    printf("Stan wins.\n");
 }
    return 0;
}
