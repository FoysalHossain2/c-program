#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        long long messingNum = A * B * C;

        if (messingNum == 0)
        {
            if (M == 0)
                printf("0\n");
            else
                printf("-1\n");
        }
        else
        {
            if (M % messingNum == 0)
                printf("%lld\n", M / messingNum);
            else
                printf("-1\n");
        }
    }

    return 0;
}
