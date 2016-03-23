#include<stdio.h>
int main()
{
    int i,j,k,a[26],n;
    char str[101];
    int st[100];
    for(i=0;i<100;i++)
	st[i]=0;
    scanf("%d",&n);
    for(i=0;i<27;i++)
	a[i]=0;
    getchar();
    scanf("%s",str);
    k=n;
    for(i=0;str[i]!='\0';i++)
    {
	j=str[i]-'a';
	if(a[j]==0)
	{
	    k--;
	    st[i]=1;
	    a[j]=1;
	}
	if(k==0)
	    break;
    }
    if(k==0)
    {
	printf("YES");
	for(i=0;str[i]!='\0';i++)
	{  
	    if(st[i]==1)
		putchar('\n');
	    printf("%c",str[i]);
	}
	putchar('\n');
    }
    else
	printf("NO\n");
return 0;
}
