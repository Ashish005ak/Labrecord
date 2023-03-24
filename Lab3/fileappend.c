#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("DemoTextFile1.txt","w");
	printf("Enter the text with @ at the end : ");
	ch=getchar();
	while(ch!='@')
	{
		putc(ch,fp);
		ch=getchar();
	}
	fclose(fp);
	fp=fopen("DemoTextFile1.txt","a");
	printf("Enter the text to append to a file with @ at the end : ");
	ch=getchar();
	while(ch!='@')
	{
		putc(ch,fp);
		ch=getchar();
	}
	putc(ch,fp);
	fclose(fp);
	fp=fopen("DemoTextFile1.txt","r");
	printf("File content after appending : ");
	ch=getc(fp);
	while(ch!='@')
	{
		putchar(ch);
		ch=getc(fp);
	}
	printf("\n");
	fclose(fp);
}