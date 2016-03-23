#include<stdio.h>
int main()
{
	int x1,x2,y1,y2,n,a,b,c;
	int p1,p2,p,step=0,i;
	scanf("%d %d",&x1,&y1);
	scanf("%d %d",&x2,&y2);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		p1=a*x1+b*y1+c;
		p2=a*x2+b*y2+c;
		if((p1>0 && p2<0) || (p1<0 && p2>0))
			step++;
	}
	printf("%d\n",step);
	return 0;
}

