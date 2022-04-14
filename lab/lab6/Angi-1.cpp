#include<Stdio.h>

int main()
{
	int i, a[10];
	
	for(i=1;i<=10;i++)
	{
		a[i]=i;
	}
	for(i=1;i<=10;i++)
	  printf("a[%d] = %d\n",i,a[i]);
  return 0;
}
