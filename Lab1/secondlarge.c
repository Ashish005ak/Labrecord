#include<stdio.h>

void main()
{
    int a[100],i=0,n,big,x=0,y,dif=1000,sl;
    do
    {
        scanf("%d",&a[i++]);
    } while (a[i-1]!=-1);
    n=i-1;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[0])
            x=99;
    }
    big=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>big)
            big=a[i];
    }
    for(i=0;i<n;i++)
    {
        y=big-a[i];
        if(y<dif&&y!=0)
        {
            dif=y;
            sl=a[i];
        }
    }
    if(x==99)
    printf("%d",sl);
    else
    printf("0");
}