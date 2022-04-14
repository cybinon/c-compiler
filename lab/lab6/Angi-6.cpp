#include<stdio.h>

int main()
{
	int n,m,i,j,a[100][100],x,s=0;
	printf("n=");
	scanf("%d",&n);
	printf("m=");
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		printf("X toog oruulna uu:");
		scanf("%d",&x);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(a[i][j] == x)
				{
				printf("a[%d][%d] = %d\n muriin too %d  baganiin too %d\n",i,j,a[i][j],i,j);
				s++;
					}		
			}
		}
		if(s==0)
		 printf("-1");
	
	return 0;
}
