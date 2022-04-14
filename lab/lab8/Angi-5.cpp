#include<Stdio.h>
#include<String.h>

int main()
{
	char t1[50],t2[50];
	gets(t1);
	gets(t2);
	strcat(t1, t2);
	puts(t1);
	
	return 0;
}
