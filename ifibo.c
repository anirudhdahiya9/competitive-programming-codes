#include<stdio.h>
void sq();
void pw(long long int exp);
long long int a[3][3],b[3][3],temp[3][3];
int main()
{
	int i,j,t;
	long long int n,f1,f2,f3,exp,fn;
	scanf("%d",&t);
	while(t--)
	{
	a[1][1]=a[1][2]=a[2][0]=a[2][2]=0;
	a[1][0]=a[2][1]=1;

		scanf("%lld %lld %lld %lld %lld %lld %lld",&n,&a[0][0],&a[0][1],&a[0][2],&f1,&f2,&f3);

		if(n==1)
			printf("%lld\n",f1%10000007);
		else if(n==2)
			printf("%lld\n",f2%10000007);
		else if(n==3)
			printf("%lld\n",f3%10000007);
		else
		{

			exp=n-3;
			for(i=0;i<3;i++)
				for(j=0;j<3;j++)
					b[i][j]=a[i][j];                 // b has original a
			for(i=0;i<3;i++)
				for(j=0;j<3;j++)
					temp[i][j]=0; // temp refreshed for new test cases

			pw(exp);
			fn=a[0][0]*f3 + a[0][1]*f2 + a[0][2]*f1;
			if(fn>0)
			printf("%lld\n",fn%10000007);
			else
				printf("0\n");
		}
	}
	return 0;
}
void sq()
{
	int i,j,k;

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			for(k=0;k<3;k++)
				temp[i][j]+= (a[i][k]*a[k][j])%10000007;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			a[i][j]=temp[i][j];
			temp[i][j]=0;
		}

}
void pw(long long int exp)
{
	if(exp==1)
		return;
	else if(exp==2)
		sq();
	else if(exp%2==0)
	{
		pw(exp/2);
		sq();
	}
	else if(exp%2!=0)
	{
		pw((exp-1)/2);
		sq();
		int i,j,k;
		// temp=b*a
		for(i=0;i<3;i++)
			for(j=0;j<3;j++)
				for(k=0;k<3;k++)
					temp[i][j]+= (b[i][k]*a[k][j])%10000007;
		// a=temp and temp clr.
		for(i=0;i<3;i++)
			for(j=0;j<3;j++)
			{
				a[i][j]=temp[i][j];
				temp[i][j]=0;
			}
	}
}


