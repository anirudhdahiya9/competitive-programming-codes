#include<stdio.h>
int main()
{
	int i,m,p1,p2,n,t;
	char a[100000],c;
	scanf("%d",&t);
	c=getchar();
	while(t--)
	{
		for(n=0;;n++)
		{
			scanf("%c",&a[n]);
			if(a[n]=='\n')
				break;
		}
		p1=p2=0;
		m=1;
		for(i=0;i<n;i++)
		{
			if(a[i]=='-' && m==1)
			{
				p1++;
				m=0;
			}
			else if(a[i]=='+' && m==0)
			{
				p1++;
				m=1;
			}
			else if(m==0)
				m=1;
			else if(m==1)
				m=0;
		}
		m=0;
		for(i=0;i<n;i++)
		{
			if(a[i]=='-' && m==1)
			{
				p2++;
				m=0;
			}
			else if(a[i]=='+' && m==0)
			{
				p2++;
				m=1;
			}
			else if(m==0)
				m=1;
			else if(m==1)
				m=0;
		}
		if(p1<p2)
			printf("%d\n",p1);
		else
			printf("%d\n",p2);
	}
	return 0;
}
