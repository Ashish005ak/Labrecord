#include<stdio.h>
void main()
{   
    char ch;
    
    scanf("%c",&ch);
    switch(ch)
    {
        case 'R':
        case 'r': printf("Red\n"); break;
        case 'Y':
        case 'y': printf("Yellow\n"); break;
        case 'G':
        case 'g': printf("Green\n"); break;
        case 'P':
        case 'p': printf("Pink\n"); break;
        default: printf("No Color\n");
    }
}