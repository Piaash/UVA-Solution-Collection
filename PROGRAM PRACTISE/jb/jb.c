
#include<cstdio>
#include<iostream>
#include<memory.h>
using namespace std;
int main()
{
    int deadline[100],k[100],profit[100],i,j,n,array[100],Task[100],t,count,y,z;
    cin>>n;
    for(i=1;i<=n;i++)
    {
      cin>>Task[i]>>deadline[i]>>profit[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(profit[j]<profit[j+1])
            {
              count=profit[j+1];
              profit[j+1]=profit[j];
              profit[j]=count;
              y=Task[j+1];
              Task[j+1]=Task[j];
              Task[j]=y;
                z=deadline[j+1];
                deadline[j+1]=deadline[j];
               deadline[j]=z;
            }
        }
    }
    memset(array,0,sizeof(array));
    int totalprofit=0;
    for(i=1,j=1;i<=n;i++)
    {
        z=0;
        y=i;
        count=deadline[i];
        while(count>=1)
        {
            if(array[count]!=-1)
            {
                array[count]=-1;
                totalprofit+=profit[i];
                k[j++]=Task[i];
                break;
            }
            else
            {
               count--;
            }

        }
    }
    printf("%d\n",totalprofit);
    for(i=1;i<j;i++)
    {
        printf("%d\n",k[i]);
    }
        return 0;
}
//1 7 15
//2 2 20
//3 5 30
//4 3 18
//5 4 18
//6 5 10
//7 2 23
//8 7 16
//9 3 25
