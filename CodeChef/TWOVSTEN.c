#include <stdio.h>

int main(void)
{
    int n, t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        scanf("%d", &t);
        if ((t % 5) != 0 && (t % 10 != 0))
            printf("-1\n");
        else
        {
            while ((t % 10) != 0)
            {
                t = t * 2;
                count++;
            }
            printf("%d\n", count);
        }
    }
    return 0;
}