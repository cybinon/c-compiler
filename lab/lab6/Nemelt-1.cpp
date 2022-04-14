#include<Stdio.h>

int main()
{
	int n,m,i,j,a[100],b[100];
	printf("n=");
	scanf("%d",&n);
	printf("m=");
	scanf("%d",&m);
	
	for(i=1;i<=n;i++)
	  {
	  	printf("a[%d]=",i);
	  scanf("%d",&a[i]);
	  }
	for(j=1;j<=m;j++)
	  {
	  	printf("b[%d]=",j);
	  scanf("%d",&b[j]);
	  }
	for(i=1;i<=n;i++)
	  {
	  	for(j=1;j<=m;j++)
	  	{
	  	  if(a[i]==b[j])
			printf("a[%d](%d) = b[%d](%d)\n",i,a[i],j,b[j]);	
		}
	  }
	return 0;
}
