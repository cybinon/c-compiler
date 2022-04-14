#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		for(int j=1;j<=n;j++)
		{
			if(j%2==0)
			printf("x");
			else
			printf("o");
		}
		printf("\n");
		}
		else
		{
		
		for(int j=1;j<=n;j++)
		{
			if(j%2==0)
			printf("o");
			else
			  printf("x");
		}
		printf("\n");
		}
	}
	return 0;
}
