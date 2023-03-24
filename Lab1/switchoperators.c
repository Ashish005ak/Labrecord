#include<stdio.h>
void main()
{  
    int x,y,val;
    char sym;
    
    scanf("%d%d %c",&x,&y,&sym);
    switch(sym)
    {
        case '+': val=x+y; break;
        case '-': val=x-y; break;
        case '*': val=x*y; break;
        case '/': val=x/y; break;
        case '%': val=x%y; break;
    }
    printf("%d",val);
}