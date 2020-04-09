#include <stdio.h>
#include <string.h>
int main(void)
{
    int n, t;
    char s[101];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%s", s);
        int len = strlen(s);
        int counta = 0, countb = 0;
        for (int j = 0; j < len; j++)
        {
            if (s[j] == 'a')
                counta++;
            if (s[j] == 'b')
                countb++;
        }
        if (counta >= countb)
            printf("%d\n", countb);
        else
            printf("%d\n", counta);
    }
    return 0;
}