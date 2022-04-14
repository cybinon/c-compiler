#include<stdio.h>

int main()
{
	int i,a[100],n;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{   
	    printf("a[%d] =",i);
		scanf("%d",&a[i]);
	}
	for(i=n;i>0;i--)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	return 0;
}
