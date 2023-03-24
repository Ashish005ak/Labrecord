#include<stdio.h>
void main()
{  
    int num,rn,d;
    
    scanf("%d",&num);
    rn=reverse(num);
    while(rn)
    {
        d=rn%10;
        display(d);
        rn=rn/10;
    }
}
void display(int d)
{
    switch(d)
    {
        case 0: printf("Zero "); break;
        case 1: printf("One "); break;
        case 2: printf("Two "); break;
        case 3: printf("Three "); break;
        case 4: printf("Four "); break;
        case 5: printf("Five "); break;
        case 6: printf("Six "); break;
        case 7: printf("Seven "); break;
        case 8: printf("Eight "); break;
        case 9: printf("Nine "); break;
    }
}
int reverse(int num)
{
    int d,rn;
    
    rn=0;
    while(num)
    {
        d=num%10;
        rn=rn*10+d;
        num=num/10;
    }
    return rn;
}