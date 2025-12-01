#include <stdio.h>
#include <stdlib.h> 

int main() {

  int n;
  scanf("%d", &n);
  int a[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  long long num = 0;
  
  for (int i = 0; i < n; i++)
  {
    num += a[i];
  }
  if (num < 0) num = -num;

  
  printf("%lld", num);
  
  
  return 0;
}
