#include<stdio.h>

void fun(int a[])
{
    x = 20;  
    printf("Fun function: %p\n", &a);
}

int main ()
{
    int a[5] = {10, 20, 30, 40, 50};
    fun(a);
    printf("Fun function: %p\n", &a);
    for (int i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
    
    return 0;
}