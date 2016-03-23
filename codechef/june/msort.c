#include<stdio.h>
typedef long long int lli;
int a[100001];
int b[100001];
void mergesort(int s,int e)
{
    if(s>=e)
	return;
    mergesort(s,(s+e)/2);
    mergesort((s+e)/2 + 1,e);
    int i,j,k;
    j=s;
    k=((s+e)/2) + 1;
    i=s;
    while(j<=(s+e)/2 && k<=e)
    {
	if(a[j]<a[k])
	{
	    b[i]=a[j];
	    j++;
	    i++;
	}
	else
	{
	    b[i]=a[k];
	    k++;
	    i++;
	}
    }
//    if(j>(s+e)/2)
//    {
	while(k<=e)
	{
	    b[i]=a[k];
	    i++;
	    k++;
	}
//    }
//    if(k>e)
//    {
	while(j<=(s+e)/2)
	{
	    b[i]=a[j];
	    i++;
	    j++;
	}
//    }
    for(i=s;i<=e;i++)
    {
	printf("%d ",b[i]);
	a[i]=b[i];
    }
    putchar('\n');
}
int main()
{
    int i,j,k;
    scanf("%d",&k);
    for(i=0;i<k;i++)
	scanf("%d",&a[i]);
    mergesort(0,k-1);
    for(i=0;i<k;i++)
	printf("%d ",a[i]);
    putchar('\n');
    return 0;
}
