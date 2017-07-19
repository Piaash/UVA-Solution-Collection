
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

main()
{
    char code[101];
    while(scanf("%s",code) == 1)
    {
        if(code[0] == '#')
        {
            return 0;
        }
        if(next_permutation(code , code + strlen(code)))
        {
            puts(code);
        }
        else
        {
            printf("No Successor\n");
        }
    }
    return 0;
}
