#include<stdio.h>
int  main()
{
    char a[100][100];
    int h,w,i,j;
    scanf("%d %d",&w,&h);
    getchar();
    for(i=0;i<h;i++)
    {
	for(j=0;j<w;j++)
	    scanf("%c",&a[i][j]);
	getchar();
    }
    for(i=0;i<h;i++)
    {
	for(j=0;j<w;j++)
	    printf("%c%c",a[j][i],a[j][i]);
	putchar('\n');
	for(j=0;j<w;j++)
	    printf("%c%c",a[j][i],a[j][i]);
	putchar('\n');
    }
    return 0;
}
