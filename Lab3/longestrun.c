#include<stdio.h>
void main()
{
  char str[200];
  int i,run=0,brun=1;
    
  scanf("%s",str);
  for(i=1;str[i];i++)
  {
    if(str[i]==str[i-1])
    {
      run=run+1;
      if(brun<run)
    	brun=run;
    }
    else
      run=1;
   }
  printf("%d",brun);
}