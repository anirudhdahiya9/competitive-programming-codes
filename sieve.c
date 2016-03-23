#include<stdio.h>
int main()
{
	int i,j,k,a[10001];
	a[0]=5;
	a[1]=1;
	for(i=2;i<10001;i++)
		a[i]=0;
//	printf("Array Refreshed\n");
	for(i=2;i<10001;i++)
	{
//		printf("loop entered\n");
		if(a[i]==0)
			for(j=2;i*j<10001;j++)
				a[i*j]=1;
	}
//	printf("Array Marked\n");
	for(i=1000;i<10000;i++)
		if(a[i]==0)
			printf("%d\n",i);
	return 0;	
}

