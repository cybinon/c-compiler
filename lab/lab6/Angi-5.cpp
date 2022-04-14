#include<stdio.h>

int main()
{
	int n,i,up=0,down=0,a[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("a[%d] =",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]<a[i+1])
		{
			up++;
		}
		else if(a[i]>a[i+1])
		{
			down++;
		}
	}
	if(up == n)
	  printf("Usuhuur erembelegdsen.");
	else if(down == n-1)
	  printf("Buurahaar erembelegdsen.");
	else 
	  printf("Erembelegdeegui.");
	return 0;
}
