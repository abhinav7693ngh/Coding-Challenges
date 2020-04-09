#include <stdio.h>

int main(void)
{
    int col, row, n, ans;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &row, &col);
        ans = (col - 2) * 2 + (row - 2) * 2 + (row - 4) * (col - 3) + (col - 3);
        if (ans < 0)
            printf("0\n");
        else
            printf("%d\n", ans);
    }
    return 0;
}