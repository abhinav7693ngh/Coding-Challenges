#include <stdio.h>
int main(void)
{
    int n, t, c;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++)
    {
        int reverse = 0;
        scanf("%d\n", &n);
        c = n;
        while (c != 0)
        {
            reverse = reverse * 10;
            reverse = reverse + (c % 10);
            c = c / 10;
        }
        if (reverse == n)
            printf("wins\n");
        else
            printf("losses\n");
    }
    return 0;
}