#include<stdio.h>
int main()
{
    int n,k,i,j,c,m,lm,mm;
    scanf("%d %d",&n,&k);
    mm=0;
    lm=1;
    m=1;
    c=0;
    if(n%2==0)
    {
	if(k<=(n*n)/2)
	{
	    printf("YES\n");
	    for(i=0;i<n;i++)
	    {
		if(lm==1)
		    m=1;
		else if(lm==0)
		    m=0;
		for(j=0;j<n;j++)
		{
		    if(mm==0)
		    {
			if(c==k)
			{
			    mm=1;
			    printf("S");
			    continue;
			}
			if(m==0)
			{
			    printf("S");
			}
			if(m==1)
			{
			    printf("L");
			    c++;
			}
			if(m==1)
			    m=0;
			else if(m==0)
			    m=1;
			if(c==k)
			{
			    mm=1;
			}
		    }
		    else
		    {
			printf("S");
		    }
		}
		putchar('\n');
		if(lm==0)
		    lm=1;
		else if(lm==1)
		    lm=0;
	    }
	}
	else
	    printf("NO\n");
    }
    else if(n%2==1)
    {
	if(k<=(n*n + 1)/2)
	{
	    printf("YES\n");
	    for(i=0;i<n;i++)
	    {
		if(lm==1)
		    m=1;
		else if(lm==0)
		    m=0;
		for(j=0;j<n;j++)
		{
		    if(mm==0)
		    {
			if(c==k)
			{
			    mm=1;
			    printf("S");
			    continue;
			}
			if(m==0)
			{
			    printf("S");
			}
			if(m==1)
			{
			    printf("L");
			    c++;
			}
			if(m==1)
			    m=0;
			else if(m==0)
			    m=1;
		    }
		    else
		    {
			printf("S");
		    }
		}
		putchar('\n');
		if(lm==0)
		    lm=1;
		else if(lm==1)
		    lm=0;
	    }
	}

	else
	    printf("NO\n");
    }
}
