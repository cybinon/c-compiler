#include<stdio.h>

int main()
{
	int x=8,y=8,c=10;
	
	printf("%d == %d = %d\n",x,y, x==y);
	printf("%d == %d = %d\n",x,c, x==c);
	
	printf("%d > %d = %d\n",x,y, x>y);
	printf("%d > %d = %d\n",x,c, x>c);
	
	printf("%d < %d = %d\n",x,y, x<y);
	printf("%d < %d = %d\n",x,c, x<c);
	
	printf("%d != %d = %d\n",x,y, x!=y);
	printf("%d != %d = %d\n",x,c, x!=c);
	
	printf("%d >= %d = %d\n",x,y, x>=y);
	printf("%d >= %d = %d\n",x,c, x>=c);
	
	printf("%d <= %d = %d\n",x,y, x<=y);
	printf("%d <= %d = %d\n",x,c, x<=c);
	
	return 0;
}
