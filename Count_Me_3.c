#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--)
    {
        
        char s[1000001];
        scanf("%s", s);
        int len = strlen(s);
    
        int count1 = 0;
        int count2 = 0;
        int digit = 0;
    
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
               count1++;

            } else if (s[i] >= 'a' && s[i] <= 'z')
            {
               count2++;

            } else if (s[i] >= '0' && s[i] <= '9') {
                digit++;  
            }
            
        }

        printf("%d %d %d\n", count1, count2, digit);
    }


    return 0;
}