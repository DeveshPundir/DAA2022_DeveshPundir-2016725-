//FIND MIN AND MAX ELEMENT IN AN ARRAY
#include <stdio.h>
#define MAX 10
int read(int *a, int n);
int larg_small(int *a, int n);
int main()
{
  int a[MAX];
  int n;
  printf("ENTER THE NO. OF ELEMENTS");
  scanf("%d", &n);

  read(a, n);
  larg_small(a, n);

  return 0;
}
int read(int *a, int n)
{
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
}
int larg_small(int *a, int n)
{
  int larg = a[0];
  int small = a[1];

  for (int i = 0; i < n; i++)
  {
    if (a[i] > larg)
      larg = a[i];

    if (a[i] <= small)
      small = a[i];
  }
  printf("the largest =%d and second largest is= %d", larg, small);
  return 0;
}
