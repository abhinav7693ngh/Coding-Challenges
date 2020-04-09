#include <stdio.h>
void countnotes(int n)
{
    int n100, n50, n10, n5, n2, n1, ans, rem;
    n100 = n / 100;
    rem = n % 100;
    n50 = rem / 50;
    rem = rem % 50;
    n10 = rem / 10;
    rem = rem % 10;
    n5 = rem / 5;
    rem = rem % 5;
    n2 = rem / 2;
    rem = rem % 2;
    n1 = rem;
    ans = n100 + n50 + n10 + n5 + n2 + n1;
    printf("%d\n", ans);
}
int main(void)
{
    int n, m;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &m);
        countnotes(m);
    }

    return 0;
}