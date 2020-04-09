#include <stdio.h>

int main(void)
{
    int n, count, rem, q = 1;
    scanf("%d", &n);
    while (q != 0)
    {
        rem = n % 10;
        q = n / 10;
        n = q;
        count++;
    }
    if (count == 1)
        printf("1");
    if (count == 2)
        printf("2");
    if (count == 3)
        printf("3");
    if (count > 3)
        printf("More than 3 digits");
}