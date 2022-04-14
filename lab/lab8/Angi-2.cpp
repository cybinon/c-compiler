#include<Stdio.h>
#include<String.h>
int main()
{
	char text[100];
	int l,s;
	
	gets(text);
	l=strlen(text);
	
	for(int j=0;j<l;j++)
	{   
	    s=0;
	    for(int i=j;text[i]==' ';i++)
		if(text[i]== 'a'|| text[i]== 'e' || text[i]==  'i' || text[i]==  'o' || text[i]==  'u' || text[i]==  'A' || text[i]==  'E' || text[i]== 'I' ||text[i]==  'O' ||text[i]==  'U')
		s++;
		printf("%d\n",s);
	}
	
	return 0;
}
