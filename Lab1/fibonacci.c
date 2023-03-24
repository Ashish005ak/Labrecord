#include<stdio.h>
void main()
{  
    int n,f1,f2,f3,i;
    
    scanf("%d",&n);
    f1=1,f2=0;
    for(i=1;i<=n;i++)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    printf("%d",f2);
}