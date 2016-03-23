#include<stdio.h>
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;;i++)
	{
		j=(i*i+i)*(2*i+4);
		j=j/12;
		if(j>n)
			break;
	}
	printf("%d\n",i-1);
	return 0;
}

