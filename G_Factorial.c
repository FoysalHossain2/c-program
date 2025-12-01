#include <stdio.h>

int main() {
    int t; 
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);

         long long fac = 1;

        for (int j = 1; j <= n; j++)
        {
          fac = fac * j;
        }

        printf("%d\n", fac);
        
    }
    

    return 0;
}
