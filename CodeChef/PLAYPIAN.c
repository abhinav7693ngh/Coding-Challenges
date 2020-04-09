#include <stdio.h>
#include <string.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        char s[101];
        scanf("%s", s);
        int count = 0;
        int len = strlen(s);
        for (int j = 0; j < len - 1; j += 2)
        {
            if (s[j] == 'A' && s[j + 1] == 'A')
                count++;
            else if (s[j] == 'B' && s[j + 1] == 'B')
                count++;
        }
        if (count == 0)
            printf("yes\n");
        if (count > 0)
            printf("no\n");
    }
    return 0;
}