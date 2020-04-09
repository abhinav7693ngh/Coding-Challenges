#include <stdio.h>

int main()
{
    int n, m, t;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &n);
        int reverse = 0;
        t = n;

        while (t != 0)
        {
            reverse = reverse * 10;
            reverse = reverse + t % 10;
            t = t / 10;
        }
        printf("%d\n", reverse);
    }
    return 0;
}