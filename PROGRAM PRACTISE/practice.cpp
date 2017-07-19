#include<cstdio>
#include<algorithm>
using namespace std ;
int main()
{
    int cases ;
    scanf("%d",&cases) ;
    int i ;
    while(cases--)
    {
        int list1Size , list2Size ;
        scanf("%d %d",&list1Size , &list2Size) ;
        int list1[list1Size] ;
        for(i = 0 ; i < list1Size ; i++)
        {
            scanf("%d",&list1[i]) ;
        }
        int list2[list2Size] ;
        for(i = 0 ; i < list2Size ; i++)
        {
            scanf("%d",&list2[i]) ;
        }
        sort(list1, list1 + list1Size) ;
        sort(list2, list2 + list2Size) ;
        int count1 =  0 , count2 = 0 , same = 0 ;
        while(count1 < list1Size && count2 < list2Size)
        {
            if(list1[count1] == list2[count2])
            {
                same++ ;
                count1++ ;
                count2++ ;
            }
            else if(list1[count1] > list2[count2])
            {
                count2++ ;
            }
            else
            {
                count1++ ;
            }
        }
        printf("%d\n",list1Size + list2Size - 2 * same) ;
    }
    return 0 ;
}
