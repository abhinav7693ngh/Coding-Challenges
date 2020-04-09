#include <stdio.h>
int sum(int a, int b)
{
    int q = a + b;
    return q;
}
int diff(int a, int b)
{
    int q = a - b;
    return q;
}
int main(void)
{
    int n1, n2, ans;
    scanf("%d\n", &n1);
    scanf("%d\n", &n2);
    if (n1 > n2)
    {
        ans = diff(n1, n2);
    }
    else
    {
        ans = sum(n1, n2);
    }
    printf("%d", ans);
    return 0;
}