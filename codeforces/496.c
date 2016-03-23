#include<stdio.h>
int main()
{
	int *a,n,i,j,num,min;
	scanf("%d",&n);
	a=malloc(sizeof(int)*n);
	scanf("%d",&num);
	for(i=n-1;i<=0;i--)
		{
			a[i]=num%10;
			num/=10;
		}
	min=num;
	for( )

	return 0;
}

