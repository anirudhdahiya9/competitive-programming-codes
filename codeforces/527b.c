#include<stdio.h>
int main()
{
    int fl,n,i,j,c,f=0,cnt;
    int map[26][27];
    for(i=0;i<26;i++)
	for(j=0;j<26;j++)
	    map[i][j]=0;
    char s[200001],t[200000],ch;
    scanf("%d",&n);
    getchar();
    scanf("%s",s);
    getchar();
    scanf("%s",t);
    i=j=-1;
    f=0;
    fl=0;
    cnt=0;
    for(c=0;c<n;c++)
    {
	if(s[c]!=t[c])
	{
	    map[s[c] - 'a'][t[c] - 'a']=1;
	    map[s[c] - 'a'][26]=1;
	    f++;
	}
    }
    for(c=0;c<n;c++)
    {
	if(s[c]!=t[c])
	{
	    if(map[t[c] - 'a'][s[c] - 'a']==1)
		fl=1;
	    i=c;
	    for(cnt=0;cnt<n;cnt++)
	    {
		if(s[cnt]==t[c] && t[cnt]==s[c])
		{
		    j=cnt;
		    break;
		}
		break;
	    }
	}
    }
	if(fl==1)
	{
	    printf("%d\n",f-2);
	    printf("%d %d\n",i+1,j+1);
	    return 0;
	}

	if(i==-1 || j==-1)
	    printf("%d\n-1 -1\n",cnt);
	else
	    printf("%d\n%d %d\n",cnt-2,i,j);
	return 0;
    }
