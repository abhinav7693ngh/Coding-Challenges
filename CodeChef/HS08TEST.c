#include <stdio.h>

int main(void)
{
    int a;
    float tot, rem;
    scanf("%d %f", &a, &tot);
    if (a % 5 == 0 && a < tot && ((tot - a) >= 0.50))
    {
        rem = (tot - 0.5) - a;
        printf("%.2f", rem);
    }
    if (a >= tot || a % 5 != 0 || ((tot - a) < 0.50))
    {
        printf("%.2f", tot);
    }
    return 0;
}