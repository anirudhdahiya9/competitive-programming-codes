#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int val;
    struct node *left;
    struct node *right;
}node;
node *root;
void search(int x,node *place)
{
    if(place==NULL)
    {
	printf("place null\n");
    }
    else if(place->val==x)
	printf("Found\n");
    else if(place->val>x)
    {
	search(x,place->left);
    }
    else if(place->val<x)
    {
	search(x,place->right);
    }
}
node ** inssearch(int x,node **place)
{
    if((*place)==NULL)
    {
	return place;
    }
    else if((*place)->val==x)
    {
	printf("Found\n");
    	return place;
    }
	else if((*place)->val>x)
    {
	inssearch(x,&((*place)->left));
    }
    else if((*place)->val<x)
    {
	inssearch(x,&((*place)->right));
    }
}
insert(int x)
{
    node **place;
    place=inssearch(x,&root);
    if((*place)!=NULL)
	printf("Already there\n");
    else
    {
	(*place)=malloc(sizeof(node));
	(*place)->val=x;
	(*place)->left=(*place)->right=NULL;
	if(root==NULL)
	{
	    root=*place;
	    printf("Rooting\n");
	}
    }
}
dfs(node * n)
{
	if(n->right==NULL && n->left==NULL)
	{
	    printf("%d\n",n->val);
	    return;
	}
	if(n->left!=NULL)
	    dfs(n->left);
	if(n->right!=NULL)
	    dfs(n->right);
	printf("%d\n",n->val);
}
node * parent(int x)
{
    node *n=root;
    while((n->left)->val!=x && (n->right)->val!=x)
    {
	if(x>n->val)
	    n=n->right;
	else if(x<n->val)
	    n=n->left;
	else if(x==n->val)//place is root itself
	    return NULL;
    }
    return n;
}
delete(int x)
{
	node **place=inssearch(x,&root);
	if(*place==NULL)
	{
	    printf("Not Found\n");
	    return;
	}
	else if(*place==root)
	{

	}
	else
	{
	    if((*place)->left==NULL && (*place)->right==NULL)
		*place==NULL;
	    else if((*place)->left==NULL)
	    {
		node *p=parent(x);
		p->right=(*place)->right;
	    }
	    else if((*place)->right==NULL)
	    {
		node *p=parent(x);
		p->left=(*place)->left;
	    }
	    else
	    {
		node *n=(*place)->left;
		while(n->left!=NULL && n->right!=NULL)
	    }
	}
}
int main()
{
    int n,i,j,x;
    root=NULL;
    scanf("%d",&i);
    while(i!=4)
    {
	if(i==1)
	{
	    scanf("%d",&x);
	    insert(x);
	}
	else if(i==2)
	{
	    scanf("%d",&x);
	    search(x,root);
	}
	else if(i==3)
	    dfs(root);
	else if(i==4)
	    break;
	scanf("%d",&i);
    }
}
