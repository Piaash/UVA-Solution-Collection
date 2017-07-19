#include<cstdio>
#include<set>
using namespace std ;
int main()
{
    int i , j , noOfDays ;
    multiset<int> urn ;
    while(scanf("%d",&noOfDays) == 1 && noOfDays != 0)
    {
        urn.clear() ;
        long long sum =  0;
        for(i = 0 ; i < noOfDays ; i++)
        {
            int noOfBills ;
        scanf("%d",&noOfBills) ;
        for( j = 0 ; j < noOfBills ; j++)
        {
            int bill ;
            scanf("%d",&bill) ;
            urn.insert(bill) ;
        }
        sum += *urn.rbegin() - *urn.begin() ;
        urn.erase(urn.begin()) ;
        urn.erase(urn.find(*urn.rbegin())) ;
        }
        printf("%lld\n",sum) ;
    }
    return 0 ;
}
