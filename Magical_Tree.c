#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int maxStar = n + 10;                 
    int topRows = (maxStar + 1) / 2;     

    int star = 1;
    int space = topRows - 1;

    for (int i = 1; i <= topRows; i++)
    {
        for (int j = 1; j <= space; j++)
            printf(" ");

        for (int j = 1; j <= star; j++)
            printf("*");

        printf("\n");
        star += 2;
        space--;
    }

    int trunkSpace = topRows - (n + 1) / 2;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= trunkSpace; j++)
            printf(" ");

        for (int j = 1; j <= n; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}