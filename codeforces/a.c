#include<stdio.h>
int main()
{
    char a[1001];
    int k,i,j,f,s;
    scanf("%s",a);
    scanf("%d",&k);
    for(i=0;i<1001;i++)
	if(a[i]=='\0')
	    break;
  //  printf("%d\n",i);
    if((i)%k==0)
    {
	s=i/k;
	int ik=s;
	f=0;
	while(ik<=i)
	{
	    for(j=ik-s;j<ik;j++)
	    {
		if(a[j]!=a[ik-j-1+ik-s])
		{
	//	    printf("%c %c\n",a[j],a[ik-j-1+ik-s]);
		    f=1;
	//	    printf("j=%d\n",j);
		    break;
		}
	    }
	    ik+=s;
	    if(f==1)
	    {
		printf("NO\n");
		break;
	    }
	}
	if(f==0)
	    printf("YES\n");
    }
    else printf("NO\n");
    return 0;
}
