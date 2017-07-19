#include<cstdio>
#include<set>
using namespace std ;
int main()
{
    int i , j , noOfDays ;
    while(scanf("%d",&noOfDays) == 1 && noOfDays != 0)
    {
        multiset<int> urn ;
        long long sum =  0;
        for(i = 0 ; i < noOfDays ; i++)
        {
            int noOfBills ;
        scanf("%d",&noOfBills) ;
        for( j = 0 ; i < noOfBills ; i++)
        {
            int bill ;
            scanf("%d",&bill) ;
            urn.insert(bill) ;
        }
        sum += *urn.rbegin() - *urn.begin() ;
        urn.erase(*urn.begin()) ;
        urn.erase(*urn.rbegin()) ;
        }
        printf("%lld\n",sum) ;
    }
    return 0 ;
}
