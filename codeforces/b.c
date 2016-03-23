#include<stdio.h>
int main()
{
    int a[501][501],i,j,k,m,n,q,rsc,sc;
    scanf("%d%d%d",&n,&m,&q);
    sc=0;
    for(i=1;i<=n;i++)
    {
	rsc=0;
	for(j=1;j<=m;j++)
	{
	    scanf("%d",&a[i][j]);
	    rsc+=a[i][j];
	}
	a[i][0]=rsc;
	if(rsc>sc)
	    sc=rsc;
    }
    for(k=0;k<q;k++)
    {
	scanf("%d %d",&n,&m);
	if(a[n][m]==0)
	{
	    a[n][m]=1;
	    a[n][0]++;
	    if(a[n][0]>sc)
		sc=a[n][0];
	    printf("%d\n",sc);
	}
	else
	{
	    a[n][m]=0;
	    a[n][0]--;
	    if(a[n][0]==(sc-1))
	    {
		sc=0;
		for(i=1;i<=500;i++)
		    if(a[i][0]>sc)
		    {
			sc=a[i][0];
		    }
	    }
	    printf("%d\n",sc);
	}
    }
    return 0;
}
