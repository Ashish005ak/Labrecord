#include<stdio.h>
#include<string.h>

struct students
{
    char name[80],rno[80];
    int m1,m2,m3,avg;
};

void sort(struct students s[],int n)
{
	int indx,i,j;
	struct students t;
	
	for(i=n-1;i>0;i--)
	{
		indx=0;
		for(j=1;j<=i;j++)
			if(s[indx].avg>s[j].avg)
				indx=j;
			
			t=s[i];
			s[i]=s[indx];
			s[indx]=t;
	}
}
void main()
{
    struct students s[50];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
	{
        scanf("%s %s %d %d %d",s[i].name,s[i].rno,&s[i].m1,&s[i].m2,&s[i].m3);
        s[i].avg=(s[i].m1+s[i].m2+s[i].m3)/3;
	}
    sort(s,n);
    for(i=0;i<n;i++)
        printf("%s %s %d %d %d %d \n",s[i].name,s[i].rno,s[i].m1,s[i].m2,s[i].m3,s[i].avg);
}