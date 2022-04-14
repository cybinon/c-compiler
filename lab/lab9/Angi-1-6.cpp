#include <stdio.h>
using namespace std;

// 1
int is_even(int n)
{
  if (n % 2 == 0)
    return 1;
  else
    return 0;
}
// 2
int min3(int a, int b, int c)
{
  if (a < b && a < c)
    return a;
  else if (b < a && b < c)
    return b;
  else
    return c;
}

// 3
void read(int a[], int n)
{
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
}

// 4
void print(int a[], int n)
{
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
}

// 5
int power(int a, int b){
  int i;
  int t;
  for (i = 1; i <= b; i++)
    t *= a;
  return t;
}

// 6
int prime(int n)
{
  int i;
  for (i = 2; i <= n / 2; i++)
    if (n % i == 0)
      return 0;
  return 1;
}
int prime_range(int a, int b)
{
  int i;
  int count = 0;
  for (i = a; i <= b; i++)
    if (prime(i))
      count++;
  return count;
}

int main()
{
  int A[5];
  int B[3];

  printf("\nEnter 5 numbers: \n");
  read(A, 5);
  print(A, 5);

  printf("\nEnter 3 numbers: \n");
  read(B, 3);
  print(B, 3);

  return 0;
}
