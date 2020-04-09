#include <stdio.h>

int main(void)
{
    int n, lucky = 0, unlucky = 0, weapon;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &weapon);
        if (weapon % 2 == 0)
        {
            lucky++;
        }
        else
        {
            unlucky++;
        }
    }
    if (lucky > unlucky)
        printf("READY FOR BATTLE\n");
    else
        printf("NOT READY");
    return 0;
}