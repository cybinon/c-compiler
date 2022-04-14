#include <stdio.h>

int count=0;
int avg=0;
int child[5] = {10,20,30,10,10};

int findChild(int i, int n)
{
	if (i > n) return count;
	i++;
	if (child[i] >= avg) count++;
	return findChild(i, n);
}

void avgFinder(int i, int n)
{
	if (i > n) {
		printf("%d\n", n);
		return;
	};
	avg=avg+child[i];
	i++;
	avgFinder(i, n);
}

int main()
{
	int n, h[100];
  int size = sizeof(child)/sizeof(child[0]);
	int i = 0;

  avgFinder(i, size);
	int total = findChild(i, size);

	printf("dundajaas undur %d huuhed baina.\n", total);

	return 0;
}
