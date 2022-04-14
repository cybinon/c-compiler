#include<stdio.h>

int main()
{
	int a=6,b=6,c=9,result;
	
	result = (a==b) && (c>b);
	printf("(a==b) && (c>b) equals to %d\n",result);
	
	result = (a==b) && (c<b);
	printf("(a==b) && (c<b) equals to %d\n",result);
	
	result = (a==b) || (c<b);
	printf("(a==b) || (c<b) equals to %d\n",result);
	
	result = (a!=b) || (c<b);
	printf("(a!=b) || (c<b) equals to %d\n",result);
	
	result = !(a!=b);
	printf(" !(a!=b) equals to %d\n",result);
	
	result = !(a==b);
	printf(" !(a==b) equals to %d\n",result);
	
	return 0;
}
