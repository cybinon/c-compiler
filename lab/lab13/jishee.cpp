#include<stdio.h>
#include<stdlib.h>
int main()

{
	int i,n;
	struct st{
      char id[10], name[20],sex[2];
      int age;
	}sx;
	
	char a_id[10],a_name[20],a_sex[2];
	int a_age;
	
	FILE * fp;
	if((fp==fopen("student.txt",'w'))==NULL)
	{
		printf("cannot open file\n");
		return 1;
	}
	printf("\n n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n ID[%d]=",i); scanf("%s",sx.id);
		printf("\n name[%d]=",i); scanf("%s",sx.name);
		printf("\n xuis[%d]=",i); scanf("%s",sx.sex);
		printf("\n nas[%d]=",i); scanf("%s",sx.age);
		fwrite(&sx, sizeof(sx),1,fp);
	}
	fclose(fp);
	fp=fopen("student.txt","r");
	a_age=0;
	while(!feof(fp))
	{
		fread(&sx,sizeof(sx),1,fp);
		if(sx.age>a_age)
		{
			a_age=sx.age;
		}
	}
	fclose(fp);
	printf("\n *********** information ***********");
	     printf("\n ID=%s",a_id);
    system("pause");
    return 0;
}
