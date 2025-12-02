#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int start = n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= start; j++)
        {
            printf("*");
        }
        printf("\n");
        start --;
    }
    

    return 0;
}