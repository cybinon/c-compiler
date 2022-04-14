#include<stdio.h>

int main()
{
	int a[100],b[100],c[200],i,j,k=1,n,m;
	
	printf("A husnegtiin hemjees: ");
	scanf("%d",&n);
	printf("B husnegtiin hemjees:");
	scanf("%d",&m);
	
	for(i=1;i<=n;i++)
	  {
	  	printf("A[%d] = ",i);
	  	scanf("%d",&a[i]);
	  }
	for(j=1;j<=m;j++)
	  {
	  	printf("B[%d] = ",j);
	  	scanf("%d",&b[j]);
	  }
	for(i=1;i<=n;i++)
	{
		c[k]=a[i];
		k++;
	}
	for(j=1;j<=m;j++)
	{
		c[k]=b[j];
		k++;
	}
	printf("\n -------------\n");
	for(k=1;k<=n+m;k++)
	  printf("C[%d] = %d\n",k,c[k]);
	return 0;
}
