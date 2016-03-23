#include<stdio.h>
int n;
void sort();
void swap();
int main()
{
	int r,avg,i,j,ess=0;
	long long int mt,mc,gap;
	scanf("%d %d %d",&n,&r,&avg);
	int **a;
	a=(int *)malloc(sizeof(int *)*n);
	for(i=0;i<n;i++)
		a[i]=malloc(sizeof(int)*2);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i][0]);
		scanf("%d",&a[i][1]);
	}
	mc=0;
	for(i=0;i<n;i++)
		mc+=a[i][0];
	mt=avg*n;
	if((gap=mt-mc)<=0)
		printf("0\n");
	else
	{
		sort(a);
//Prints array sorting
	for(i=0;i<n;i++)
		printf("%d %d\n",a[i][0],a[i][1]);
		for(i=0;i<n;i++)
		{
			while(a[i][0]!=r)
			{
				if(gap==0)
					break;
				gap--;
				a[i][0]++;
				ess+=a[i][1];
			}
			if(gap==0)
				break;
		}
	printf("%d\n",ess);
	}
	return 0;
}
void sort(int **a)
{
	int i,j,f;
	for(i=n;i>0;i--)
	{
		f=0;
		for(j=0;j<i-1;j++)
		{
			if(a[j][1]>a[j+1][1])
			{
				swap(j,a);
				f=1;
			}
		}
			if(f==0)
				break;
	}
}
void swap(int j,int **a)
{
	int temp0;
	temp0=a[j][0];
	a[j][0]=a[j+1][0];
	a[j+1][0]=temp0;
	temp0=a[j][1];
	a[j][1]=a[j+1][1];
	a[j+1][1]=temp0;
}
