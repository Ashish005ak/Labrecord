#include<stdio.h>
void main()
{
  int a[2000],n,cnt=0,i,j;
  void read1D(int x[],int n);
  
  scanf("%d",&n);
  read1D(a,n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<i;j++)
      if(a[i]==a[j])
      	break;
    if(j==i)
      cnt=cnt+1;
  }
  printf("%d ",cnt);
}
void read1D(int x[],int n)
{
  int i;
  
  for(i=0;i<n;i++)
    scanf("%d",&x[i]);
}