#include <stdio.h>
int main(void)
{
    int t, n, m, k;
    scanf("%d\n", &t);
    for (int p = 0; p < t; p++)
    {
        int count1 = 0, count3 = 0;

        scanf("%d %d %d\n", &n, &m, &k);
        int a[m + 1], b[k + 1], c[n + 1], check[n + 1];
        for (int i = 1; i <= m; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 1; i <= k; i++)
        {
            scanf("%d", &b[i]);
        }
        for (int i = 1; i <= n; i++)
        {
            c[i] = i;
        }
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                if (a[i] == b[j])
                    count1++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (c[i] == a[j])
                    c[i] = 0;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                if (c[i] == b[j])
                    c[i] = 0;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (c[i] != 0)
                count3++;
        }
        printf("%d %d\n", count1, count3);
    }

    return 0;
}