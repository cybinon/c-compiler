#include<stdio.h>

int main()
{
	int n,i=1;
	scanf("%d",&n);
	
	for(int i;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("x");
		}
		printf("\n");
	}
	return 0;
}
