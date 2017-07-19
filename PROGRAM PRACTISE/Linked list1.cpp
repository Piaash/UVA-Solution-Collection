#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node
{
    int value;
    struct node *next;
};

int main()
{
    struct node *p,*q,*r,*t;
    int m,n,x,y,z,i,j,k;
    puts("Input no:");
    scanf("%d",&n);
    puts("Inputs:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        if(i==1)
        {
            p=(struct node *)malloc(sizeof(struct node));
            p->value=m;
            p->next=NULL;
            r=p;
        }
        else
        {
            q=(struct node *)malloc(sizeof(struct node));
            q->value=m;
            q->next=NULL;
            p->next=q;
            p=q;
        }
    }
    p=r;
    while(p!=NULL)
    {
        printf("%d ",p->value);
        p=p->next;
    }
    return 0;
}

