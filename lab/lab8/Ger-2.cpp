#include<stdio.h>
#include<string.h>
int main() {
	int m=0, n, i, j;
	char s[100], a[100], b[100];
	gets(s);
	for(i=0; i<strlen(s);){ j=0; n=0;
		do{
			a[j]=s[i];
			if(s[i]=='a'||s[i]=='A'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='e'||s[i]=='E'||s[i]=='u'||s[i]=='U')
			n=n+1;
		i=i+1;
		j=j+1;
		}while(s[i]!=' ');
	if(n>m) 
	{for(j=0; j<strlen(a); j++)
	b[j]=a[j];
		}
	}
puts(b);
return 0;
}
