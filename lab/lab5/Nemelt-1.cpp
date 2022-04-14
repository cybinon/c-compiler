#include<stdio.h>

int main()
{
	int n,a=0;
	scanf("%d",&n);
	
	for(int i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		 {
		 	a=1;
		 	goto end;
		 }
	}
	end:
		if(a==0)
		printf("%d ni Anhnii too mun baina.",n);
		else
		printf("%d ni Anhnii too bish baina!",n);
		
	return 0;
}
