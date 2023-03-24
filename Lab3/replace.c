#include<stdio.h>
#include<string.h>

void main()
{
	char ps[200],c,s[50];
	int i,j,l,l2;
	
	scanf("%s %c %s",ps,&c,s);
	l=strlen(s);
	i=0;
	while(ps[i])
	{
		if(ps[i]==c)
		{
			l2=strlen(ps);
			for(j=l2;j>i;j--)
				ps[j+l-1]=ps[j];
			j=0;
			while(s[j])
				ps[i++]=s[j++];
			i=i-1;
		}
		i=i+1;
	}
	printf("%s",ps);
}