#include<String.h>
#include<stdio.h>

int main()
{
	char text[100],b[100];
	int l,j=0;
	gets(text);
	l=strlen(text);
	
	for(int i=0; i<l; i++)
	 {  
	    
	 	if(text[i+1]>=65 && text[i+1]<=122 && text[i]==32)
	 	  printf("\n");
		  else
		  printf("%c",text[i]);
	 }
	 return 0;
}
