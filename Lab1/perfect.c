#include<stdio.h>
#include<math.h>
void main()
{
    int lb,ub,num,sum,i,t,j;
    
    scanf("%d%d",&lb,&ub);
    for(i=lb;i<=ub;i++)
    {
        num=i;
        sum=1;
        t=sqrt(num);
        for(j=2;j<=t;j++)
            if(num%j==0)
                sum=sum+j+num/j;
        if(sum==num)
            printf("%d ",num);
    }
}