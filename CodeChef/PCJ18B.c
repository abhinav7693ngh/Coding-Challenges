#include <stdio.h>

int main(void)
{
    int n, t, rep;
    scanf("%d\n", &t);
    for (int i = 1; i <= t; i++)
    {
        int count = 0;
        scanf("%d\n", &n);
        for (int j = 1; j <= n; j++)
        {
            if (j % 2 != 0)
            {
                rep = n - j + 1;
                count = count + (rep * rep);
            }
        }
        printf("%d\n", count);
    }
    return 0;
}