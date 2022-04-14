#include<stdio.h>

int main()
{
	int n,k,m,i=1,j=1,f=1;
	printf("davhariin too:\n ortsnii too: \n ailiin too:\n");
	scanf("%d%d%d",&n, &k, &m);
	
    while(i<=k)
    {
    	j=1;
    	while(j<=n)
    	{
    		f=1;
    		while(f<=m)
    		{
    			printf("%d-r ortsni %d davharin %d-r aiil.\n",i,j,f);
    			f++;
			}
			j++;
		}
		i++;
	}
	   
   return 0;
}
