#include <stdio.h>

int main(void)
{
    int n;
    long int a, b;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%ld %ld\n", &a, &b);
        if (a > b)
            printf(">\n");
        else if (a < b)
            printf("<\n");
        else
            printf("=\n");
    }

    return 0;
}