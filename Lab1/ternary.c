#include<stdio.h>
void main()
{
    int x,y;
    
    scanf("%d",&x);
    y=x>0?1:(x<0?-1:0);
    printf("%d",y);
}