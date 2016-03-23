#include<stdio.h>
int main()
{
    char a[100001];
    int ab=0;
    int ba=0,or=0;
    int i;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
	if(a[i]=='A')
	{
	    if(a[i+1]=='B')
	    {
		if(a[i+2]=='A')
		{
		    or+=1;
		    i+=2;
		}
		else
		{
		    ab+=1;
		    i+=1;
		}
	    }
	}

	else if(a[i]=='B')
	{
	    if(a[i+1]=='A')
	    {
		if(a[i+2]=='B')
		{
		    or+=1;
		    i+=2;
		}
		else
		{
		    ba+=1;
		    i+=1;
		}
	    }
	}
    }
    if(or>1)
	printf("YES\n");
    else if(or==1 && (ab>0 || ba>0))
	printf("YES\n");
    else if(ab>0 && ba>0)
	printf("YES\n");
    else
	printf("NO\n");
    return 0;
}
