#include <stdio.h>
#include <math.h>
int count;
int nosq(int n)
{
    int sq;
    sq = sqrt(n);
    n = n - (sq * sq);
    count++;
    //printf("%d  ",count);
    if (n != 0)
        nosq(n);
    return count;
}
int main(void)
{
    int n, q;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &q);
        count = nosq(q);
        printf("%d\n", count);
        count = 0;
    }
    return 0;
}