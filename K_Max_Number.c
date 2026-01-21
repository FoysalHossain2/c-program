#include <stdio.h>

int maxNum (int n, int a[]) {
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i]; 
        }
    }

    return max;
    
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int ans = maxNum(n, a);
    printf("%d", ans);

    return 0;
}