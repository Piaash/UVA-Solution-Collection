
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<limits>
#include<cmath>
#include<queue>
#include<map>
#define LLU long long unsigned int
#define LLD long long double
#define FOR(i,N) for(int i=0;i<(N);i++)
#define N 20000000
using namespace std;
bool mark[N];
vector<int> prime;
vector<int> twins;
void calc()
{
    memset (mark, true, sizeof (mark));
    mark [0] = mark [1] = false;
    for ( int i = 4; i < N; i += 2 )
        mark [i] = false;
    for ( int i = 3; i * i <= N; i++ )
    {
        if ( mark [i] )
        {
            for ( int j = i * i; j < N; j += 2 * i )
                mark [j] = false;
        }
    }

    prime.clear ();
    prime.push_back (2);

    for ( int i = 3; i < N; i += 2 )
    {
        if ( mark [i] )
            prime.push_back (i);
    }
}

int main()
{
    calc();
    for(size_t i=1,len=prime.size();i<len;i++)
    {
        if(prime[i]-prime[i-1]==2)
            twins.push_back(prime[i-1]);
    }
    int n;
    while(scanf(“%d”,&n)!=EOF)
    {
        n=twins[n-1];
        printf(“(%d, %d)\n”,n,n+2);
    }
}
