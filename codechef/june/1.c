#include<stdio.h>
typedef long long int lli;
int main()
{
    lli i,j,k,s,new;
    lli t;
    scanf("%lld",&t);
    while(t--)
    {
	scanf("%lld",&i);
	j=0;
	s=0;
	while(i--)
	{
	    scanf("%lld",&k);
	    new=k-j;
	    if(new>0)
		s+=new;
	    j=k;
	}
	printf("%lLd\n",s);
    }
return 0;
}
