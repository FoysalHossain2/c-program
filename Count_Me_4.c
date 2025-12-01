#include <stdio.h>

int main() {
    char s[1000001]; 
    scanf("%s", s);
    int len = strlen(s);
    int fre[26] = {0};

    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            fre[s[i] - 'a']++;
        }
        
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
        {
            printf("%c - %d\n", i + 'a', fre[i]);
        }
    }

    

    return 0;
}
