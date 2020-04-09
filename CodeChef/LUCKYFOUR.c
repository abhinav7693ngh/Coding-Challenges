#include <stdio.h>
void digcount(int n)
{
    int q = 1, rem, coufour = 0;
    while (q != 0)
    {
        rem = n % 10;
        if (rem == 4)
        {
            coufour++;
        }
        q = n / 10;
        n = q;
    }
    printf("%d\n", coufour);
}
int main(void)
{
    int n;
    scanf("%d\n", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        digcount(arr[j]);
    }
    return 0;
}