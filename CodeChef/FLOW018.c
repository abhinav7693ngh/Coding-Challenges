#include <stdio.h>

int main(void)
{
    int n, t;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++)
    {
        int ans = 1;
        scanf("%d\n", &n);
        for (int j = 1; j <= n; j++)
            ans *= j;
        printf("%d\n", ans);
    }

    return 0;
}