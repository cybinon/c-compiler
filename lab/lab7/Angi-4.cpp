#include<stdio.h>

int main()
{
	int a[100][100],b[100],n,m,i,j,k,max;
	printf("Murin too:");
	scanf("%d",&n);
	printf("Baganiin too:");
	scanf("%d",&m);
	
	for(i=1;i<=n;i++)
	  for(j=1;j<=m;j++)
	   {
	   	printf("a[%d][%d]=",i,j);
	   	scanf("%d",&a[i][j]);
	   }
	for(i=1;i<=m;i++)
	{
    	k=0;
	  for(j=1;j<=n;j++)
	   {
	   	if(a[j][i]%2==0)
	   	  k++;
	   }
	   b[i]=k;
	}
	max=b[1];
	j=1;
	for(i=2;i<=m;i++)
	{
	  if(max<b[i])
	  {
	    max=b[i];
	    j=i;
	   }
	}
	printf("%d dahi bagana %d tegsh tootoitoogoor hamgiin ih ni baina.",j,max);
	
	return 0;
}
