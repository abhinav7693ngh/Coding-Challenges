#include <stdio.h>

int main(void)
{
    int n, t, c1, c2, max, min;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &c1, &c2);
        if (c1 < c2)
        {
            min = c2;
        }
        else
            min = c1;
        max = c1 + c2;
        printf("%d %d\n", min, max);
    }
    return 0;
}