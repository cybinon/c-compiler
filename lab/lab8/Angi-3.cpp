#include<Stdio.h>
#include<string.h>
int main()
{
	char t1[100],t2[100];
	int l,k=0;
	gets(t1);
	gets(t2);
	l= strlen(t1);
	for(int i=0;i<l;i++)
	{
		if(t1[i]!=t2[i])
		k++;
	}
	if(k==0)
	 printf("ijilhen ug baina.");
	 else
	  puts("ijilhen ug bish baina.");
	  
	return 0;
}
