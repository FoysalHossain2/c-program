#include <stdio.h>
#include <string.h>

int main() {
    char s[55], t[55];
    scanf("%s %s", s, t);

    int s_len = strlen(s);
    int t_len = strlen(t);
    for (int i = 0; i < t_len; i++)
    {
        printf("%c %c", s[i], t[i]);
    }
    
    return 0;
}
