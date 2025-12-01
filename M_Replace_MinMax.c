#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  int min = 0;
  int max = 0;

  while (a[i] < min && a[i] > max)
  {
    int tmp = a[i];
    a[min] = a[max];
    a[max] = tmp;
  }

    for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }


  return 0;
}
