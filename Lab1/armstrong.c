#include<stdio.h>
#include<math.h>
void main()
{
    int lb,ub,num,sum,i,d;
    
    scanf("%d%d",&lb,&ub);
    for(i=lb;i<=ub;i++)
    {
        num=i;
        sum=0;
        while(num!=0)
        {
            d=num%10;
            sum=sum+d*d*d;
            num=num/10;
        }
        if(sum==i)
            printf("%d ",i);
    }
}