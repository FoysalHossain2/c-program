#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);
  int a[n];

    for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
    }

    int sum = 0;
    int sub = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > 0){

            sum += a[i];   

        } if (a[i] < 0) {
            
            sub += a[i];   

        } 
        
    }
    printf("%d %d", sum, sub);

  return 0;
}
