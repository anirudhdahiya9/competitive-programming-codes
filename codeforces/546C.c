#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int val;
    struct node * next;
}node;
int main()
{
    int n,k1,k2,i,j,k;
    scanf("%d",&n);
    node * p1=malloc(sizeof(node));
    node * p2=malloc(sizeof(node));
    p1->val=1;
    p1->next=NULL;
    p2->val=2;
    p2->next=NULL;
    node *p1p=p1,*p2p=p2;
    scanf("%d",&k1);
    for(i=0;i<k1;i++)
    {
	p1p->next=malloc(sizeof(node));
	p1p=p1p->next;
	scanf("%d",&(p1p->val));
	p1p->next=NULL;
    }
    scanf("%d",&k2);
    for(i=0;i<k2;i++)
    {
	p2p->next=malloc(sizeof(node));
	p2p=p2p->next;
	scanf("%d",&(p2p->val));
	p2p->next=NULL;
    }
    printf("player 1 cards\n");
    p1p=p1->next;
    while(p1p!=NULL)
    {
	printf("%d ",p1p->val);
	p1p=p1p->next;
    }
	putchar('\n');
    printf("player 2 cards\n");
    p2p=p2->next;
    while(p2p!=NULL)
    {
	printf("%d ",p2p->val);
	p2p=p2p->next;
    }
	putchar('\n');
}
