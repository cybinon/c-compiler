#include <stdio.h>
using namespace std;

int isPrime(int n)
{
  int i;
  for (i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int digit_sum(int n)
{
  int sum = 0;
  while (n > 0)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

void read(int a[], int n)
{
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
}
void print(int a[], int n)
{
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");
}

int join(int A[], int B[], int n, int m){
  int i;
  for (i = n; i < n + m; i++)
    A[i] = B[i - n];
  return n + m;
}


int main()
{
  int a[100], b[100], n, m;
  scanf("%d", &n);
  read(a, n);
  print(a, n);
  scanf("%d", &m);
  read(b, m);
  print(b, m);
  int k = join(a, b, n, m);
  printf("Нийт массив.\n");
  print(a, k);
  return 0;
}