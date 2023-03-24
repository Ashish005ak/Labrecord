#include<stdio.h>
void swap(int*x,int*y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("a=%d b=%d\n",a,b);
	swap(&a,&b);
	printf("a=%d b=%d\n",a,b);
}