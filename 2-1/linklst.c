#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    typedef struct node {
	int val;
	struct node *next;
    }node;
    scanf("%d",&n);
    node *head=malloc(sizeof(node));
    node *cur=head;
    for(i=0;i<n;i++)
    {
	scanf("%d",&(cur->val));
	cur->next=malloc(sizeof(node));
	cur=cur->next;
    }
    cur=head;
    while(cur->next!=NULL)
    {
	printf("%d\n",cur->val);
	cur=cur->next;
    }
    return 0;
}
