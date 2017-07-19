#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std ;
int modulo ;
bool comp(int n1, int n2)
    {
        if(n1 % modulo > n2 % modulo)
        {
            return true ;
        }
        else if(n1 % modulo < n2 % modulo)
        {
            return false ;
        }
        else
        {
            if(abs(n1 % 2) != 0 && abs(n2 % 2) == 0)
            {
                return false ;
            }
            else if(abs(n1 % 2) == 0 && abs(n2 % 2) != 0)
            {
                return true ;
            }
            else if(abs(n1 % 2) != 0 && abs(n2 % 2) != 0)
            {
                if(n1 > n2)
                {
                    return false ;
                }
                else
                {
                    return true ;
                }
            }
            else
            {
                if(n1 > n2)
                {
                    return true ;
                }
                else
                {
                    return false ;
                }
            }
        }
    }
    main()
    {
        int number , modulo ;
        while(scanf("%d %d" , &number , &modulo) == 2)
        {
            printf("%d %d\n" , number , modulo) ;
            if(number == 0 && modulo == 0)
            {
                break ;
            }
            vector<int> vec ;
            for(int i = 0 ; i < number ; i++)
            {
                int temp ;
                scanf("%d" , &temp) ;
                vec.push_back(temp) ;
            }
            sort(vec.begin() , vec.end() , comp) ;
            for(int i = 0 ; i < vec.size() ; i++)
            {
                printf("%d\n" , vec[i]) ;
            }
        }
        return 0 ;
    }

