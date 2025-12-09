#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // Upper Pyramid
    int start = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
            printf(" ");

        for (int j = 1; j <= start; j++)
            printf("*");

        printf("\n");

        start += 2;
        space--;
    }

    // Lower Pyramid
    start = 2*n - 1; 
    space = 0;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= space; j++)
            printf(" ");

        for (int j = 1; j <= start; j++)
            printf("*");

        printf("\n");

        space++;
        start -= 2;
    }

    return 0;
}
