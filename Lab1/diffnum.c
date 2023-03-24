#include<stdio.h>

void main()
{
    int a[200],cnt=1,i=0,num,n;
    do
    {
        scanf("%d",&a[i++]);
    } while (a[i-1]!=-1);
    n=i-1;
    num=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]!=num)
        {
           num=a[i]; 
           cnt++;
        }
    }
        printf("%d",cnt);

}