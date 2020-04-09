#include <stdio.h>

int main(void)
{
    int t;
    double m, n;
    double total;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%lf %lf", &m, &n);
        if (m > 1000)
        {
            total = m * n;
            total = total - ((0.1) * total);
            printf("%lf\n", total);
        }
        else
        {
            total = m * n;
            printf("%lf\n", total);
        }
    }
    return 0;
}