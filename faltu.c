#include<stdio.h>
int main()
{
	int a[100],*s;
	a[0]=0;
	a[1]=42350;
	printf("%d\n",*(a+1));
	return 0;
}


