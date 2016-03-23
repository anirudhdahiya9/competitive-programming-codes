#include<stdio.h> 
#include<string.h>
int main()
{
	int n,t,T,i;
	char a[1000001],c;
	scanf("%d\n",&T);
	for(t=0;t<T;t++)
	{
		scanf("%s%*C",a);
		i = strlen(a);
		n= a[i-1] - '0' + (a[i-2]-'0')*10;
		if(n%4==0)
			printf("4\n");
		else
			printf("0\n");
	}
	return 0;
}

