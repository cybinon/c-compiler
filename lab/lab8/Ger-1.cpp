#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, too;
  	too = 1;
 
  	printf("\n Uguulberee oruulna uu :  ");
  	gets(str);
  	 	   	
  	for(i = 0; str[i] != '\0'; i++) 
	{
		if((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && ((str[i+1]>='0' && str[i+1]<='Z') || (str[i+1]>='a' && str[i+1]<='z')))
		{
			too++;	
		} 
	}	
	printf("\n Niit ugiin too  = %d", too);
	
  	return 0;
}
