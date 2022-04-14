#include<Stdio.h>

int main()
{
	int n,i=1;
	scanf("%d",&n);
	for(i; i<=n;i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("x");
		}
		printf("\n");
		if(i==n)
		goto res;
	}
	res:
		i--;
		for(i;i>0;i--)
		{
			for(int j=1;j<=i;j++)
			{
			   printf("x");
			}
			printf("\n");
		}
	return 0;
}
