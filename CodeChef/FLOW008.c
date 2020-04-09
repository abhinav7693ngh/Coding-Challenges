#include <stdio.h>

int main(void)
{
    int t, n;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d\n", &n);
        if (n < 10)
            printf("What an obedient servant you are!\n");
        else
            printf("-1\n");
    }
    return 0;
}