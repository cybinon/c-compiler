#include<stdio.h>

int main()
{
	int n,x,i,a[100],s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("X too :");
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
		if(a[i] == x)
		{
			printf("a[%d] = %d\n",i,a[i]);
			s++;
		}
	}
	if(s == 0)
	  printf("-1");
	return 0;
}
