#include<Stdio.h>
#define SIZE 10

void bubblesort(int *const array, const int size);
int main()
{
	int a[SIZE]={2,6,4,8,10,12,89,68,45,37};
	int i;
	printf("\n Data items in original order");
	 for(i=0; i<SIZE; i++)
	   printf("%3d",a[i]);
	
	bubblesort(a,SIZE);
	printf("\n Data items in ascending order");
	 for(i=0;i<SIZE;i++)
	    printf("%3d",a[i]);
	return 0;
}
void bubblesort(int *const array, const int size)
{
	void swap(int *elementptr, int *element2ptr);
	int pass;
	int j;
	for(pass=0; pass<SIZE-1 ;pass++)
	{
		for(j=0;j<SIZE-1;j++)
		{
			if(array[j]>array[j+1])
			 swap(&array[j], &array[j+1]);
		}
	}
}
void swap(int *element1ptr, int *element2ptr)
{
	int temp=*element1ptr;
	*element1ptr=*element2ptr;
	*element2ptr=temp;
}
