#include <stdio.h>

int main(void)
{
    int n, t, ld, fd, q = 1, ans, rem;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &t);
        ld = t % 10;
        while (t != 0)
        {
            q = t / 10;
            rem = t % 10;
            t = q;
        }
        fd = rem;
        ans = fd + ld;
        printf("%d\n", ans);
    }
    return 0;
}