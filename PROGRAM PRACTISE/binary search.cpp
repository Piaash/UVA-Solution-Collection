#include<stdio.h>
#include<conio.h>
main()
{
      int low=0,high=15,mid,a[15],n;
      a[15]=(1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100);
      scanf("%d",&n);
      while (low<= high)
{
      mid=(low+high)/2;
      if(n==a[mid])
{     break;
}
      if(n<a[mid])
{     high=mid-1;
}
     else
{    low=mid+1;
} 
     if(low>high)
{
     printf("%d is not in the array\n", n);
}
     else
{
     printf("%d is found in the array. It is the %d th element of the array.\n", a[mid], mid);            
}
}

getch();


}
