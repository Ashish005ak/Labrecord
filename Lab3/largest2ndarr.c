#include<stdio.h>
void main()
{
  int a[20],b[20],n1,n2,large=0,i,j;
  void read1D();
  
  scanf("%d",&n1);
  read1D(a,n1);
  scanf("%d",&n2);
  read1D(b,n2);
  for(i=0;i<n1;i++)
  {
    for(j=0;j<n2;j++)
      if(a[i]==b[j])
      	break;
    if(j==n2)
    	break;
  }
  if(i==n1)
    goto last;
  large=a[i];
  for(i++;i<n1;i++)
  {
    if(a[i]>large)
    {
      for(j=0;j<n2;j++)
        if(a[i]==b[j])
        	break;
      if(j==n2)
        large=a[i];
    }
  }
  last: printf("%d",large);
}
void read1D(int x[],int n)
{
  int i;
  
  for(i=0;i<n;i++)
    scanf("%d",&x[i]);
}