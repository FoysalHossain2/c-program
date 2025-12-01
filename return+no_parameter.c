#include <stdio.h>

// return + no parameter
// int sum () 
// {
//     int a,b;
//     scanf("%d %d", &a, &b);
//     int ans = a + b;
//     return ans;
// }

// int main() 
// {   
//     int ans = sum();
//     printf("%d", ans);
//     return 0;
// }


/***** 14-6 Function with no return + parameter *****/

void sum (int a, int b) 
{
    int ans = a+b;
    printf("%d", ans);
}

int main() 
{   
    int a,b;
    scanf("%d %d", &a, &b);
    sum(a,b);
    
    return 0;
}
