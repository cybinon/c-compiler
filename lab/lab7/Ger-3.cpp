#include <stdio.h>
 
int main()
{

  int m, n, p, q, i, j, k, sum = 0;
  int a[10][10], b[10][10], c[10][10];
 
  printf("A matrixiin mur baganin too:\n");
  scanf("%d%d", &m, &n);
 
 
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++) 
    {
	 printf("a[%d.%d]=",i,j);
      scanf("%d", &a[i][j]);
     }
  printf("B matrixiin mur baganiin too:\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("A matrix iin baganiin too = B matrixiin muriin too !\n");
  else
  {
    
 
    for (i = 0; i < p; i++)
      for (j = 0; j < q; j++)
      {
	  printf("b[%d.%d]=",i,j);
        scanf("%d", &b[i][j]);
      }
    for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++) {
        for (k = 0; k < p; k++) {
          sum = sum + a[i][k]*b[k][j];
        }
 
        c[i][j] = sum;
        sum = 0;
      }
    }
 
    printf("2 matrixiin urjver matrix:\n");
 
    for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++)
        printf("%d\t", c[i][j]);
 
      printf("\n");
    }
  }
 
  return 0;
}
