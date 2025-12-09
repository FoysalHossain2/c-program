#include<stdio.h>

void fun(char s[])
{
    printf("%s", s);
}

int main() 
{
   char s[0];
   scanf("%s", &s);
    fun(s, 10);
    return 0;
}