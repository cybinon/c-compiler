#include<Stdio.h>

int main()
{
	int a[10],b[10],c[10],n,m,i,j,k=0,a;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	  {
	  	printf("a[%d]=",i);
	  	scanf("%d",&a[i]);
	  }
	scanf("%d",&m);
	for(j=1;j<=m;j++)
	 {
	 	printf("b[%d]=",j);
	 	scanf("%d",&b[j]);
	 }
	 for(i=1;i<=n;i++)
	 {
	   c[i]=a[i];
	   k++;
	}
	 for(j=1;j<=m;j++)
	   {
	   	a=0;
	   	for(i=1;i<=n;i++)
	   	{
	   	   if(c[i]==b[j])
			  a++;	
		}
		if(a==0)
		  {
		  	k++;
		  	c[k]=b[j];
		  }
	   }
	   for(i=1;i<=k;i++)
	    printf("%d\n",c[i]);
	   
	return 0;
}
