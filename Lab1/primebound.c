#include<stdio.h>
#include<math.h>

void main()
{
    int lb,ub,i,temp,n,j;
    scanf("%d %d",&lb,&ub);
    for(i=lb;i<=ub;i++)
    {
        n=i;
        temp=sqrt(n);
        for(j=2;j<=temp;j++)
            if(n%j==0)
                break;
        if(j>temp)
        printf("%d ",n);

    }
}