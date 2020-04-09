#include <stdio.h>
#include <math.h>
int main(void)
{
    long long int a, b, t, n, ans, tb, ta;
    scanf("%lld", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &t);
        tb = t / 2;
        ta = t - tb;
        a = a * pow(2, ta);
        b = b * pow(2, tb);
        if (a >= b)
        {
            ans = a / b;
            printf("%lld\n", ans);
        }
        else
        {
            ans = b / a;
            printf("%lld\n", ans);
        }
    }
    return 0;
}