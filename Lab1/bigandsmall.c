#include<stdio.h>

void main()
{
    int x,y,z,big,small;
    scanf("%d %d %d",&x,&y,&z);
    big=x>y?(x>z?x:z):(y>z?y:z);
    small=x<y?(x<z?x:z):(y<z?y:z);
    printf("%d",big);
    printf("\n%d",small);
}