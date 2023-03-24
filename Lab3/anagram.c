#include<stdio.h>
void main()
{
  int a[500]={0},b[500]={0},i,result=0;
  char s[80],t[80];
  
  scanf("%s%s",s,t);
  for(i=0;s[i];i++)
    a[s[i]]=a[s[i]]+1;
  for(i=0;t[i];i++)
    b[t[i]]=b[t[i]]+1;
  for(i=0;i<256;i++)
    if(a[i]!=b[i])
    	break;
  if(i<256)
    result=-1;
  else
    for(i=0;s[i];i++)
    	if(s[i]==t[i])
    		result=result+1;
   
  printf("%d",result);
}