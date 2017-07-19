#include<stdio.h>
#include<conio.h>
main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9},b[3][3]={9,8,7,6,5,4,3,2,1};
    int i,j,k,c[3][3]={0};
    for(i=0;i<3;i++)/*i for row*/
    {
        for(j=0;j<3;j++)/*j for column*/
        {
            for(k=0;k<3;k++)/*k for index & k must be smaller then column*/
            c[i][j]+=a[i][k]*b[k][j];
            printf("%5d",c[i][j]);
        }
        printf("\n");
    }
    getch();
}
