#include<stdio.h>

void main()
{
    FILE *fp,*fp1,*fp2;
    char ch;
    fp=fopen("Sample1.txt","w");
    ch=getchar();
    while(ch!='@')
    {
        putc(ch,fp);
        ch=getchar();
    }
    putc(ch,fp);
    fclose(fp);
    fp1=fopen("Sample1.txt","r");
    fp2=fopen("Sample2.txt","w");
    ch=getc(fp1);
    while(ch!='@')
    {
        putc(ch,fp2);
        ch=getc(fp1);
    }
    putc(ch,fp2);
    fclose(fp1);
    fclose(fp2);
    fp=fopen("Sample2.txt","r");
    printf("Copied text is\n");
    ch=getc(fp);
	while(ch!='@')
	{
		putchar(ch);
		ch=getc(fp);
	}
	printf("\n");
	fclose(fp);
}