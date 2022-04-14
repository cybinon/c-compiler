#include<stdio.h>

int main()
{
	int a[100],n,i,j,k=0;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("a[%d] =",i);
		scanf("%d",&a[i]);
	}
	i=1;
	j=n;
	while(i<=n/2)
	{
		if(a[i]!=a[j])
		{
			k++;
		}
		i++;
		j--;
	}
	if(k==0)
	  printf("tegsh hemtei.");
	else
	  printf("tegsh hemgui.");
	  
	  return 0;
}
