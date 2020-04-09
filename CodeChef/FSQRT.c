#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, sqno, sq;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &sqno);
        sq = sqrt(sqno);
        printf("%d\n", sq);
    }
    return 0;
}