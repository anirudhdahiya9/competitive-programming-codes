#include<stdio.h>
int main()
{
	int x,n,a[1000],i,j,p,p1,p2,ans=0;
	char s;
	scanf("%d %d",&x,&n);
	for(i=0;i<n*9;i++)
		a[i]=0;
	for(i=0;i<n;i++)
	{
		getchar();
		for(j=0;j<54;j++)
		{
			if(j<36)
			{
				scanf("%c",&s);
				if(s=='0')
					a[(j/4)+i*9]++;
			}
			else
			{
				scanf("%c",&s);
				if(s=='0')
					a[((53-j)/2)+i*9]++;
			}
		}
	}
	for(i=0;i<n*9;i++)
	{
		if(a[i]>x)
		{
			p1=fact(a[i]);
			p2=fact(x)*fact(a[i]-x);
			p=p1/p2;
			ans+=p;
		}
		else if(a[i]==x)
			ans++;
	}
	printf("%d\n",ans);	
	return 0;
}
int fact(int n)
{
	int i,f=1;
	for(i=2;i<=n;i++)
		f*=i;
	return f;
}



	

