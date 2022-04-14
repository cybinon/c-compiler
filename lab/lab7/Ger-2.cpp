#include<stdio.h>

int main()
{
	int n,i,j,a[100],s;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		a[i]=i;
	}
	for(i=1;i<=n;i++)
	{
	  s=0;
	  for(j=i;j<=n;j++)
	  {
	    printf("%d  ",a[j]);
	    s++;
	}
	  for(int k=1;k<=n-s;k++)
	    printf("%d  ",a[k]);
	  printf("\n");
	  }
	  return 0;
}
