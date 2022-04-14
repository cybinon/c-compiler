#include<stdio.h>

int main()
{
	int n,a[100][100],i,j,s=0;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	   for(j=1; j<=n; j++)
	     {
	     	printf("%d.%d = ",i,j);
	     	scanf("%d",&a[i][j]);
		 }
	for(i=1;i<=n;i++)
	{

	  for(j=1;j<=n;j++)
	    s=s+a[i][j];
	  printf("%d muriin niilber : %d\n",i,s);
	  s=0;		
	  }
	for(i=1;i<=n;i++)
	{
	  for(j=1;j<=n;j++)
	   s=s+a[j][i];
	  printf("%d baganiin niilber: %d\n",i,s);
	  s=0;
	} 
	s=0;
	for(i=1;i<=n;i++)
	 {
	 	for(j=1;j<=n;j++)
	 	{
	 		if(i==j)
	 		 s=s+a[i][j];
		 }
	 }
	 printf("zuun diagnoliin niilber : %d\n",s);
	 s=0;
	for(i=1;i<=n;i++)
	 {
	 	for(j=n;j>=1;j--)
	 	{
	 		if(i+j==n+1)
	 		 s=s+a[i][j];
		 }
	 }
	 printf("baruun diagnoliin niilber : %d\n",s);
	return 0;

}
