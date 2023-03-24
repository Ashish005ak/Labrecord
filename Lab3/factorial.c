#include<stdio.h>
void main()
{
	int num,f;
	
	scanf("%d",&num);
	f=fact(num);
	printf("%d",f);
}
int fact(int n)
{
	if(n<=1)
		return 1;
	return(n*fact(n-1));
}