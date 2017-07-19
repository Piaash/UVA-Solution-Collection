#include<stdio.h>
main()
{
    int h1,m1,h2,m2;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4&&(h1!=0||m1!=0||h2!=0||m2!=0))
    {
        if(h1==h2&&m1==m2)
        printf("0\n");
        else if(m1==m2&&h2>h1)
        printf("%d\n",60*(h2-h1));
        else if(m1==m2&&h1>h2)
        printf("%d\n",60*(24+h2-h1));
        else if(h1==h2&&m2>m1)
        printf("%d\n",m2-m1);
        else if(h1==h2&&m1>m2)
        printf("%d\n",(24*60)-m1+m2);
        else if(h2>h1&&m2>m1)
        printf("%d\n",60*(h2-h1)+m2-m1);
        else if(h2>h1&&m1>m2)
        printf("%d\n",60*(h2-h1)-m1+m2);
        else if(h1>h2&&m2>m1)
        printf("%d\n",60*(24+h2-h1)+m2-m1);
        else if(h1>h2&&m1>m2)
        printf("%d\n",60*(24+h2-h1)-m1+m2);
    }
    return 0;
}
