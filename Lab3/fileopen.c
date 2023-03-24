#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char ch;
	
	fp=fopen("SampleText1.txt","w");
	ch=getchar();
	while(ch!='@')
	{
		putc(ch,fp);
		ch=getchar();
	}
	putc(ch,fp);
	fclose(fp);
	fp=fopen("SampleText1.txt","r");
	ch=getc(fp);
	while(ch!='@')
	{
		putchar(ch);
		ch=getc(fp);
	}
	printf("\n");
	fclose(fp);
}