#include <stdio.h>

int main(void)
{
    int n, t, ans;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int count = 0, i = 1;
        scanf("%d", &n);
        while (n > 0)
        {
            if (i == 1)
            {
                i++;
                continue;
            }
            n = n - i;
            i++;
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}