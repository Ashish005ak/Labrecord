#include<stdio.h>

void main()
{
	int a[50][50],b[50][50],i,j,m,n,val=0;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			b[j][i]=a[i][j];
	if(m!=n)
	{
		val=5;
		goto l1;
	}
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(a[i][j]!=b[i][j])
			{
				val=5;
				break;
			}
	l1:;
	if(val==5)
		printf("Not symmetric");
	else
		printf("Symmetric");
}