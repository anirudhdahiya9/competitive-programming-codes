#include<stdio.h>
int first,second;
int main()
{
	int n,k,s,t,test,T;
	void func( int n,int k,int t);
	scanf("%d",&test);
	for(T=0;T<test;T++)
	{
	scanf("%d %d",&n,&k);
	s=t=first=second=0;
	func(n,s,t);
	if(k==2)
		printf("%d %d\n",first,second);
	if(k==1)
		printf("%d %d\n",second,first);
	}
	return 0;
}
void func(int n,int s,int t)
{
	if(s>n)
		return;
	else if(s==n)
	{
		if(t%2==0)
		{
			first++;
			return;
		}
		if(t%2==1)
		{
			second++;
			return;
		}
	}
	else
	{
		func(n,s+1,t+1);
		func(n,s+2,t+1);
	}
}



