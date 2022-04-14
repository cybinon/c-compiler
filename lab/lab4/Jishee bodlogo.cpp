#include<stdio.h>

int main()
{
	int n,s=0;
	long p=1;
	
	printf("\n n=");
	scanf("%d",&n);
	
	if(n==0)
	{   
	printf("p=1");
		s=1;
	}
	else
	{
	
	for(int i=1;i<=n;i++)
	{
		p=p*i;
		  printf("%d \n",p);
		s=s+p;
	}
}
	printf("\n Niilber=%d",s);
	return 0;
	
}
