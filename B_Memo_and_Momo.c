#include <stdio.h>

int main()
{
    long long int a,b, k;
    scanf("%lld %lld", &a, &b);
    scanf("%lld", &k);

    if (a % k == 0 && b % k == 0) 
    {
        printf("Both");
    } else if (a % k == 0 && b % k != 0)
    {
        printf("Memo");
    } else if (a % k != 0 && b % k == 0)
    {
        printf("Momo");
    } else 
    {
        printf("No One");
    }
    
    
    
    return 0;
    
}