#include <stdio.h>
void count(int n)
{
    int q = 1, rem, count = 0;
    while (q != 0)
    {
        rem = n % 10;
        count += rem;
        q = n / 10;
        n = q;
    }
    printf("%d\n", count);
}
int main(void)
{
    int n, t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        count(n);
    }
    return 0;
}