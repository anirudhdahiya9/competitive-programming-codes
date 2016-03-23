#include<stdio.h>
long long int b[3][3],c[3][3],p[3][3],d[3][3],f[3][3],g[3][3];
void mult()
{
	int i,j;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	b[i][j]=((p[i][0]*p[0][j])%10000007+(p[i][1]*p[1][j])%10000007+(p[i][2]*p[2][j])%10000007)%10000007;
}
void mult1()
{
	int i,j;
         for(i=0;i<3;i++)
         for(j=0;j<3;j++)
         f[i][j]=((c[i][0]*d[0][j])%10000007+(c[i][1]*d[1][j])%10000007+(c[i][2]*d[2][j])%10000007)%10000007;
}
void mult2()
{
         int i,j;
         for(i=0;i<3;i++)
         for(j=0;j<3;j++)
         g[i][j]=((c[i][0]*p[0][j])%10000007+(c[i][1]*p[1][j])%10000007+(c[i][2]*p[2][j])%10000007)%10000007;
}
int main()
{
	long long int x,y,o,z,i,t,j,k,l,n,m,q,r,s;
	scanf("%lld",&t);
	while(t--)
	{
		long long int cnt=2;
		c[0][0]=c[1][1]=c[2][2]=1,c[0][1]=c[1][0]=c[2][0]=c[0][2]=c[1][2]=c[2][1]=0;
		scanf("%lld%lld%lld%lld%lld%lld%lld",&m,&x,&y,&z,&q,&r,&s);
		n=m-3;
		if(n>0)
		{
		d[0][0]=x,d[0][1]=y,d[0][2]=z,d[1][0]=d[2][1]=1,d[1][1]=d[1][2]=d[2][0]=d[2][2]=0;
		for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		p[i][j]=d[i][j];		
		while(n>1)
		{	
			do
			{	
				cnt=cnt*2;	
				mult();
				for(i=0;i<3;i++)
	                        for(j=0;j<3;j++)
		                p[i][j]=b[i][j];
			}while(cnt<=n);
			n=n-cnt/2;
			cnt=2;
			mult2();
			for(i=0;i<3;i++)
			for(j=0;j<3;j++)
			c[i][j]=g[i][j];
			for(i=0;i<3;i++)
			for(j=0;j<3;j++)
			p[i][j]=d[i][j];
		}
		if(n==1)
		{
			mult1();
			o=f[0][0]*s+f[0][1]*r+f[0][2]*q;
			printf("%lld\n",o%10000007);
		}
		else if(n==0)
		{
			o=c[0][0]*s+c[0][1]*r+c[0][2]*q;
			printf("%lld\n",o%10000007);
		}
		}
		else if(n<=0)
		{
			if(m==1)
				printf("%lld\n",q%10000007);
			else if(m==2)
	                        printf("%lld\n",r%10000007);
			else if(m==3)
				printf("%lld\n",s%10000007);
		}
	}
		return 0;
}



