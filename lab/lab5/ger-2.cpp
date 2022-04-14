#include<stdio.h>

int main()
{
	int x,y,z;
	for(x=1; x<=100; ++x)
	 for(y=1;y<=100; ++y)
	   for(z=1; z<=100; ++z)
	    if(x*x+y*y==z*z and x<=y and y<=z)
	      printf("%d %d %d \n",x,y,z);
	return 0;
	
}
