#include<stdio.h>
void main()
{   
    int code;
    
    scanf("%d",&code);
    if(code==1)
        printf("Red\n");
    else if(code==2)
        printf("Green\n");
    else if(code==3)
        printf("Blue\n");
    else if(code==4)
        printf("Pink\n");
    else
        printf("No color\n");
}