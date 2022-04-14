#include<stdio.h>

int main()
{
	int x,y,n,s;
	scanf("%d",&n);
	
	for(x=0; x<=n ;++x)
	  for(y=0; y<=n; ++y)
	   {
		 s=x*x-y*y;
		 if(s%n==0)
		 printf("%d %d \n",x,y);
	}
	return 0;
}
