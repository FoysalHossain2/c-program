#include <stdio.h>

int main() {
    long long a;
    scanf("%lld", &a);
    int n[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &n[i]);
    }

    int count2 = 0;
    int count3 = 0;

    for (int i = 0; i < a; i++)
    {
        if (n[i] % 2 == 0 && n[i] % 3 == 0) {
            count2++;
        }
        else if (n[i] % 2 == 0)
        {
            count2++;
        } 
        else if (n[i] % 3 == 0)
        {
            count3++; 
        } 
    } 

    printf("%d %d", count2, count3);


    return 0;
}
