#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, cupcakes, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &cupcakes);
        ans = cupcakes / 2 + 1;
        if (ans >= cupcakes)
        {
            printf("%d\n", cupcakes);
        }
        else
        {
            printf("%d\n", ans);
        }
        ans = 0;
    }

    return 0;
}