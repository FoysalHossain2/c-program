#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);
  int a[n], b[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  int palindromeNum = 1;
  int i = 0;
  int j = n-1;

  while (i < j)
  {
    if (a[i] != a[j])
    {
       palindromeNum = 0;
      break;
    }

    i++;
    j--;
    
  }

  if (palindromeNum == 1)
  {
    printf("YES");
  } else {
    printf("NO");
  }

  
  return 0;
}
