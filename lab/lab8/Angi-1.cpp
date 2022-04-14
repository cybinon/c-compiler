#include<stdio.h>
#include<String.h>

int main()
{
	char ln[20],fn[20],dob[20],col[20],hob[15],d[50];
	int year;
	printf("Tanii ovog?");
	gets(ln);
	printf("Tanii ner?");
	gets(fn);
	printf("Tursun on ?");
	scanf("%d",&year);
	printf("Tursun on, sar udur?");
	gets(dob);
	printf("Durtai ungu?");
	gets(col);
	printf("Hobby?");
	gets(hob);
	puts("Hiih durtai zuil?");
	gets(d);
	printf("%s ovogtoi %s ni %s-nii udur tursun. Odoo %d nastai. Tunii durtai ungu bol %s. Ter chuluut tsagaaraa %s hiideg. Tuunii hobby ni %s",ln,fn,dob,2020-year,col,d,hob);
	
	return 0;
}
