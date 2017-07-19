#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std ;
int main()
{
    int cases ;
    scanf("%d",&cases) ;
    int i ;
    for(i = 1 ; i <= cases ; i++)
    {
        int list1Size , list2Size ;
        scanf("%d %d",&list1Size , &list2Size) ;
        int list1[list1Size] ;
        for(i = 1 ; i <= list1Size ; i++)
        {
            scanf("%d",&list1[i]) ;
        }
        int list2[list2Size] ;
        for(i = 1 ; i <= list2Size ; i++)
        {
            scanf("%d",&list2[i]) ;
        }
        sort(list1, list1 + list1Size) ;
        sort(list1, list2 + list2Size) ;
        vector<int> v ;
        vector<int>::iterator it ;
        set_intersection(list1 , list1 + list1Size , list2 , list2 + list2Size , v.begin()) ;
        v.resize(it - v.begin()) ;
        int result = list1Size + list2Size - v.size() ;
        printf("%d",result) ;
    }
    return 0 ;
}
