#include <stdio.h>
int sum(int n)
{
    int q = (n * (n + 1)) / 2;
    return q;
}
int main(void)
{
    int n, d, m, suum;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d\n", &d, &m);
        suum = m;
        for (int j = 0; j < d; j++)
        {

            suum = sum(suum);
        }
        printf("%d\n", suum);
    }

    // your code goes here
    return 0;
}