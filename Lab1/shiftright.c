#include<stdio.h>
void main()
{  
    int num,b,val;
    
    scanf("%d%d",&num,&b);
    val=num>>b;
    printf("%d",val);
}