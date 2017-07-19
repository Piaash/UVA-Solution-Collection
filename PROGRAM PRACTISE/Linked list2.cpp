#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node
{
    int v1;
    int v2;
    struct node *next;
};

int main()
{
    struct node *p,*q,*r,*r2,*p2,*p1,*r1;
    int m,n,x,y,z,i,j,k;
    puts("No of input: ");
    scanf("%d",&n);
    puts("Power & Co-efficient:");
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        if(i==1)
        {
            p=(struct node *)malloc(sizeof(struct node));
            p->v1=x;
            p->v2=y;
            p->next=NULL;
            r=p;
        }
        else
        {
            q=(struct node *)malloc(sizeof(struct node));
            q->v1=x;
            q->v2=y;
            q->next=NULL;
            p->next=q;
            p=q;
        }
    }
    p=r;
    i=1;
    p1=r;
    while(p1!=NULL)
    {
        int count=0;
        p2=r;
        while(p2!=NULL)
        {
            if(p2->v1==p1->v1 && p2->v2!=NULL)
                {
                    count+=p2->v2;
                    p2->v2=NULL;
                }
            p2=p2->next;
        }
        if(i==1)
        {
            p=(struct node *)malloc(sizeof(struct node));
            p->v1=p1->v1;
            p->v2=count;
            p->next=NULL;
            r1=p;
        }
        else
        {
            q=(struct node *)malloc(sizeof(struct node));
            q->v1=p1->v1;
            q->v2=count;
            q->next=NULL;
            p->next=q;
            p=q;
        }
        i++;
        p1=p1->next;
    }
    p=r1;
    puts("After Ans: ");
    while(p!=NULL)
    {
        if(p->v2!=NULL)
            printf("%d %d\n",p->v1,p->v2);
        p=p->next;
    }
    return 0;
}
