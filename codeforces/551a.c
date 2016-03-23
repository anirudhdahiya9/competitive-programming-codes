#include<stdio.h>
int main()
{
    int n,i,j,k,t;
    int a[2000][2];
    int r[2000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	scanf("%d",&a[i][0]);
	a[i][1]=i;
    }
    for(j=1;j<n;j++)
    {
	for(i=0;i<n-j;i++)
	{
	    if(a[i][0]<a[i+1][0])
	    {
		t=a[i][0];
		a[i][0]=a[i+1][0];
		a[i+1][0]=t;
		t=a[i][1];
		a[i][1]=a[i+1][1];
		a[i+1][1]=t;
	    }
	}
    }
    /*
    for(i=0;i<n;i++)
	printf("%d ",a[i][0]);
    putchar('\n');
    */
    k=1;
    t=2;
    r[a[0][1]]=1;
    for(i=1;i<n;i++,t++)
    {
	if(a[i][0]==a[i-1][0])
		r[a[i][1]]=r[a[i-1][1]];
	else
	    r[a[i][1]]=t;
    }

    for(i=0;i<n;i++)
	printf("%d ",r[i]);
    putchar('\n');
    return 0;
}
